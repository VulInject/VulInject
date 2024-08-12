static int FUN1(struct VAR1 *VAR2)
{
int VAR3;
uint8_t VAR4;

do {

FUN2(80);

VAR3 = FUN3(VAR2,
VAR5, &VAR4, 1);
if (VAR3)
return VAR3;


} while (VAR4 == 3);

if (VAR4 == 1) 
return 0;


FUN4(&VAR2->VAR6, "", VAR4);
return -VAR7;
}