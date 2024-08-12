int FUN1(int VAR1, char *VAR2, size_t VAR3, int VAR4) {
char *VAR5 = VAR2;
while(VAR3 > 0) {
int VAR6 = FUN2(VAR1, VAR4);
if (VAR6 > 0) {
ssize_t VAR7 = write(VAR1, VAR5, VAR3);
if (VAR7 <= 0) {
return -1;
} 
VAR5 += VAR7;
VAR3 -= VAR7;	
continue;
}
return -1;
}

return 0;
}