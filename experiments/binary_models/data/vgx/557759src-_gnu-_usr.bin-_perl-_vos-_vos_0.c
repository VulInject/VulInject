int
FUN1(const char *VAR1, off_t VAR2)
{
int VAR3 = open(VAR1,VAR4);
int VAR5 = -1;
if (VAR3 >= 0) {
VAR5 = FUN2(VAR3,VAR2);
close(VAR3); 
}
return VAR5;
}