int FUN1(VAR1 *VAR2)
{

int VAR3 = FUN2((void *)&VAR2->VAR4);

if (VAR3 == VAR2->VAR5) {

VAR2->VAR4 = VAR3 + VAR6;

return 1;
}

if (!(VAR3 & 1)) {

VAR2->VAR4 = VAR3;
}

return 0;
}