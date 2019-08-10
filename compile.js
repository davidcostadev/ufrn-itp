const { exec } = require('child_process');

const programName = 'aula-01';

exec(`cc ./src/${programName}.c -o ./output/${programName}`, (err, stdout, stderr) => {
    if (err) {
        console.log(err.toString());
        return;
    }
    
    if (stdout) {
        console.log(`stdout: ${stdout}`);
    }
    if (stderr) {
        console.log(`stderr: ${stderr}`);
    }

    console.log(new Date(), `${programName}.c file compiled`)
})