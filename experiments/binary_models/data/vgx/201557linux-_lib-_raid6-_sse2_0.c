static void FUN1(int VAR1, size_t VAR2, void **VAR3)
{
VAR4 **VAR5 = (VAR4 **)VAR3;
VAR4 *VAR6, *VAR7;
int VAR8, VAR9, VAR10;

VAR10 = VAR1 - 3;		
VAR6 = VAR5[VAR10+1];		
VAR7 = VAR5[VAR10+2];		

FUN2();

asm volatile("" : : "" (VAR11.VAR12[0]));
asm volatile(""); 
asm volatile(""); 


for ( VAR8 = 0 ; VAR8 < VAR2 ; VAR8 += 32 ) {
asm volatile("" : : "" (VAR5[VAR10][VAR8]));
asm volatile("" : : "" (VAR5[VAR10][VAR8]));    
asm volatile("" : : "" (VAR5[VAR10][VAR8+16])); 
asm volatile(""); 
asm volatile(""); 
for ( VAR9 = VAR10-1 ; VAR9 >= 0 ; VAR9-- ) {
asm volatile("" : : "" (VAR5[VAR9][VAR8]));
asm volatile("");
asm volatile("");
asm volatile("");
asm volatile("");
asm volatile("");
asm volatile("");
asm volatile("");
asm volatile("");
asm volatile("" : : "" (VAR5[VAR9][VAR8]));
asm volatile("" : : "" (VAR5[VAR9][VAR8+16]));
asm volatile("");
asm volatile("");
asm volatile("");
asm volatile("");
asm volatile("");
asm volatile("");
}
asm volatile("" : "" (VAR6[VAR8]));
asm volatile("" : "" (VAR6[VAR8+16]));
asm volatile("" : "" (VAR7[VAR8]));
asm volatile("" : "" (VAR7[VAR8+16]));
}

asm volatile("" : : : "");
FUN3();
}