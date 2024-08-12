};
FUN1(VAR1, VAR2);


static void FUN2(struct VAR3 *VAR4, int *VAR5)
{
struct VAR6 *VAR7 = (struct VAR6 *) VAR4->VAR8;
u8 VAR9;

FUN3(VAR7->VAR10, VAR11, &VAR9);
*VAR5 = (int)VAR9;



if (*VAR5 == 0)
*VAR5 = VAR12 >> 2;   
}