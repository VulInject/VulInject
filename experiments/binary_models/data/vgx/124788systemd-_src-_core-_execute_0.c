static int FUN1(int VAR1, uid_t VAR2) {
int VAR3;

assert(VAR1 >= 0);


if (FUN2(VAR1) < 1) {
if (FUN3(VAR4, VAR5, VAR6))
return 0; 

return -VAR4;
}


VAR3 = FUN4(VAR1, VAR7, VAR2, VAR8);
if (VAR3 < 0)
return VAR3;

return 1;
}