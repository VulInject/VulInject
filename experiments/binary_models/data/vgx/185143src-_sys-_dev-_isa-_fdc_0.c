void
FUN1(void *VAR1)
{
struct VAR2 *VAR3 = VAR1;
struct fdc_attach_args VAR4;
int VAR5;


if (VAR3->VAR6.VAR7 == 0)
VAR5 = FUN2(NULL, VAR8); 
else
VAR5 = -1;

FUN3(&VAR3->VAR9, VAR10, VAR3);


for (VAR4.VAR11 = 0; VAR4.VAR11 < 4; VAR4.VAR11++) {
VAR4.VAR12 = 0;
VAR4.VAR13 = 0;
if (VAR5 >= 0 && VAR4.VAR11 < 2)
VAR4.VAR14 = FUN4(VAR3->VAR6.VAR15,
VAR5, VAR4.VAR11);
else
VAR4.VAR14 = NULL;		
(void)FUN5(&VAR3->VAR6, (void *)&VAR4, VAR16);
}
FUN6(0);
}