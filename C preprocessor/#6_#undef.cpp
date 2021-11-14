/*
    The defination of the macro will exist from the #define directive till the end of the program.
    If we want to undefine this macro we can use the #undef directive
    
    General Syntax ::
    
    #undef macro_name
    
    After this directive if the macro_name is encountered thenit will not be replaced by the 
    macro_expression. In other words now the scope of the macro is limited to the code between 
    #define and #undef
    
    this directive is useful with other conditional compliation directives

 */