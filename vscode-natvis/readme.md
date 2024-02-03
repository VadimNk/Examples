natvis configuration for vscode

path to natvis file must be specified in launch.json file
   "visualizerFile": "${workspaceFolder}/test.natvis",
   "showDisplayString": true,


whole example of launch.json vscode debug configuration:
```
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "(gdb) Launch",
            "type": "cppdbg",
            "request": "launch",
            "program": "${workspaceFolder}/test.out",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${fileDirname}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "visualizerFile": "${workspaceFolder}/test.natvis",
            "showDisplayString": true,
        }
    ]
}
```

Compile with:
g++ test.cpp -o test.out -ggdb
