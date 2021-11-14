/*
    there may be situation when we want to compile some parts of the code based on a condition.
    we know that before compilation the source code passes through the preprocessor , so we can 
    direct the preprecessor to supply only some part code of the code the compiler for compilation
    
    
    conditional compilation means compilation of a part of code based on some condition,
    these conditions are checked during the preprocessing phase, the  directives used in conditional
    are :
    
    #ifdef   #ifndef  #if    #else   #elif    #endif
    
    Every #if  directice should end with a #endif directive. the working pf these directives are somewhat 
    similar to that if_else construct
    
*/