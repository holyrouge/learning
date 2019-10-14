/*
Commands for the Linux/UNIX Terminal
    - pwd : gives the absolute path to the current directory
    - ls : list all the files in the directory
        -l : provides a long version of the files with more information 
        -a : provides information on all files (including hidden files/links)
    - cd : change directory using a relative or absolute path
        ~ : reference to the home directory
    - clear : clears the terminal window
    - touch : creates a new file based on the given name
    - mv : move given file to the given location
    - mkdir : create a new directory with the new name
        can create multiple folders by providing multiple names
    - rm : remove the given directory
        -r : removes a directory
    - echo : outputs the text that is within the quotation marks on the terminal
        can direct the output to a file using > filename
        this overrides the original contents of the file or creates a new file
            if the given file does not exist
        use >> to append to a new line at the end of a file
    - cat : display the contents of a file on the terminal
    - less : displays the contents of a file on the terminal 
        allows the user to scroll through the contents of the file 
            rather than displaying everything at once
        use the 'q' key to escape

Flags provide more functionality and do more specific versions of the main 
    task given by the command
        Multiple flags can be used at the same time to provide all their 
            functionality

The output of any command can be directed to a file using the > operator 
    The >> operator can be used to be append to a new line at the end of a file
*/