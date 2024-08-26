const fs = require('fs');

// Function to generate the diamond pattern
function generateDiamond(n) {
    let pattern = '';

    // Generate the upper part of the diamond
    for (let i = 0; i < n; i++) {
        pattern += ' '.repeat(n - i - 1) + '*'.repeat(2 * i + 1) + '\n';
    }

    // Generate the lower part of the diamond
    for (let i = n - 2; i >= 0; i--) {
        pattern += ' '.repeat(n - i - 1) + '*'.repeat(2 * i + 1) + '\n';
    }

    return pattern;
}

// Read the number from vsofficial.txt
fs.readFile('vsofficial.txt', 'utf8', (err, data) => {
    if (err) {
        console.error('Error reading the file:', err);
        return;
    }

    // Parse the number from the file
    const n = parseInt(data, 10);

    if (isNaN(n) || n <= 0) {
        console.error('Invalid number in vsofficial.txt. Please provide a valid positive number.');
        return;
    }

    // Generate the diamond pattern
    const pattern = generateDiamond(n);

    // Write the pattern to output.txt
    fs.writeFile('output.txt', pattern, (err) => {
        if (err) {
            console.error('Error writing to the file:', err);
        } else {
            console.log('Diamond pattern has been written to output.txt.');
        }
    });
});
