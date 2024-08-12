static void FUN1(struct VAR1 *VAR2)
{
int VAR3,VAR4;
const VAR5 *VAR6;

for(VAR4=0;VAR4<VAR2->VAR7;VAR4++) {
for(VAR3=0;VAR3<VAR2->VAR8;VAR3++) {
VAR6 = &VAR2->VAR9[VAR4*VAR2->VAR10+(VAR3*2)];


if(VAR6[0]!=VAR6[1])
{
VAR2->VAR11=1;
}

if(VAR2->VAR11) {

goto VAR12;
}
}
}
VAR12:
;
}