const readline = require('readline');

// Create an interface to read input from the console
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Function to generate the diamond pattern
function printDiamond(n) {
    let pattern = '';

    // Generate the upper part of the diamond
    for (let i = 0; i < n; i++) {
        pattern += ' '.repeat(n - i - 1) + '*'.repeat(2 * i + 1) + '\n';
    }

    // Generate the lower part of the diamond
    for (let i = n - 2; i >= 0; i--) {
        pattern += ' '.repeat(n - i - 1) + '*'.repeat(2 * i + 1) + '\n';
    }

    console.log(pattern);
}

// Prompt the user to enter a number
rl.question('Enter a number: ', (input) => {
    const n = parseInt(input, 10);

    if (isNaN(n) || n <= 0) {
        console.log('Please enter a valid positive number.');
    } else {
        printDiamond(n);
    }

    rl.close();
});
