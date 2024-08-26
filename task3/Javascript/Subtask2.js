const fs = require('fs');

// Read the string from input.txt
fs.readFile('input.txt', 'utf8', (err, data) => {
    if (err) {
        console.error('Error reading the file:', err);
        return;
    }

    // Write the string to output.txt
    fs.writeFile('output.txt', data, (err) => {
        if (err) {
            console.error('Error writing to the file:', err);
        } else {
            console.log('File has been copied successfully.');
        }
    });
});
