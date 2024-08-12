int
FUN1(VAR1 *VAR2, unsigned char *VAR3, unsigned int *VAR4,
VAR5 *VAR6)
{
unsigned char VAR7[VAR8];
unsigned int VAR9;
EVP_MD_CTX VAR10;
VAR11 *VAR12 = NULL;
size_t VAR13;
int VAR14 = 0;

*VAR4 = 0;
EVP_MD_CTX_init(&VAR10);
if (!FUN2(&VAR10, VAR2))
goto VAR15;
if (!FUN3(&VAR10, &(VAR7[0]), &VAR9))
goto VAR15;
FUN4(&VAR10);

VAR13 = (VAR16)FUN5(VAR6);

if ((VAR12 = FUN6(VAR6, NULL)) == NULL)
goto VAR15;
if (FUN7(VAR12) <= 0)
goto VAR15;
if (FUN8(VAR12, VAR2->VAR17) <= 0)
goto VAR15;
if (FUN9(VAR12, VAR3, &VAR13, VAR7, VAR9) <= 0)
goto VAR15;
*VAR4 = VAR13;

VAR14 = 1;

VAR15:
FUN10(VAR12);
return VAR14;
}