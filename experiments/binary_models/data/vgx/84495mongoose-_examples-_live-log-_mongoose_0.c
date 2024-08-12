VAR1 FUN1(struct VAR2 *VAR3, char **VAR4, size_t VAR5) {
size_t VAR6 = 0, VAR7 = sizeof(VAR8) * 2;  
if (VAR3->VAR9 >= VAR3->VAR10 && VAR3->VAR9 + VAR5 + VAR7 <= VAR3->VAR11) {
VAR6 = VAR3->VAR11 - VAR3->VAR9 - VAR7;  
} else if (VAR3->VAR9 >= VAR3->VAR10 && VAR3->VAR10 > VAR7) {
FUN2(VAR3, 0);  
VAR3->VAR9 = 0;               
}
if (VAR3->VAR9 + VAR7 + VAR5 < VAR3->VAR10) VAR6 = VAR3->VAR10 - VAR3->VAR9 - VAR7;
if (VAR4 != NULL) *VAR4 = VAR3->VAR4 + VAR3->VAR9 + sizeof(VAR8);
return VAR6;
}