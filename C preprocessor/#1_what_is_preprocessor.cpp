/*
    1. what is preprocessor ?
    --> The C preprocessor scans and modifes the source code before compliation
    
    2. Main function performed the preprocessor are ?
    -->   1. simple Macro substitution
          2. macros with parameters
          3.conditional complilation
          4. file Inclusion
          5. error generetion and pragma directives
          
    3. some advantages of using preprocessor ?
    -->   1. Enhances the readability of the program
          2. program modification makes easy
          3. progrma becomes portable and efficient 
          4. can be used for testing and debugging
          
    
    The lines starting with the symbol # are known as preprocessor directives, when the preprocessor finds a diretives line 
    starting with the symbol #, it considered that line as a command for itself and works accordingly. All the directivesare executed by the 
    tjhe preprocessor, and the compiler does not receive any line starting with # symbol.
    
    4. some features of preprocessor directives are ---
    
        1. Each preprocessor directives starts with # symbol
        2. there canbe only one directive on a line
        3. to continue a directive on next line , we should place a backslash at the end of the line
        4. Directives don't end with ; semicolon
        5. The preprocessor directives can be placed anywhere in a program(inside or outside functions)
        but they are usually written at the beginning of a program
        6. A directive is active from the point of its appearence till the end of the program
        
    The preprocessor directives that perform these functions are given below
    
    --> #define  #includes  #if  #else   #elif   # endif  #ifdef  #ifndef  #error  #undef  #line  #pragma 
    
    There are three operators that are used with these directives -

    --> Defined operator - defined()
        stringizing operator - #
        token pasting operator - ##

    ### A proprocessor directives conssiting only of the symbol # is known as the null directive and it  has no effect
    

    
     */