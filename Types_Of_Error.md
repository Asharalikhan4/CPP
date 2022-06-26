# SIGILL - 
This signal denotes illegal instruction. When a garbage instruction or instruction that a program has no privilege to execute, is executed then this signal is generated. C does not produce illegal instruction so there is no chance of facing such an error signal, as the probable cause may be that the object file may be corrupted. This signal is also generated when a stack overflow occurs. 
 
# SIGSEGV - 
The signal is generated when a process tries to access a memory location not allocated to it, like de-referencing a wild pointer which leads to a "segmentation fault". The signal is only generated when a program goes far from its memory space so that it can be detected by the memory protection mechanism. 
The name is an abbreviation for “segmentation violation”. 

# SIGBUS - 
The name is an abbreviation for “Bus error". This signal is also produced when an invalid memory is accessed. It may seem to be the same as SIGSEGV but in SIGSEGV, the memory location referenced is valid but in the case of SIGBUS, memory referenced does not exist i.e de-referencing a memory location out of memory space. 
 
# SIGABRT - 
If an error itself is detected by the program then this signal is generated using call to abort(). This signal is also used by the standard library to report an internal error. assert() function in c++ also uses abort() to generate this signal. 