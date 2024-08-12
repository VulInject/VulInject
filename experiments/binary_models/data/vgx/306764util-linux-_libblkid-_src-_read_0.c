static int FUN1(blkid_cache VAR1, VAR2 *VAR3, char *VAR4)
{
blkid_dev VAR5;
int VAR6;

if (!VAR1 || !VAR3)
return -VAR7;

*VAR3 = NULL;

FUN2(VAR8, FUN3("", VAR4));

if ((VAR6 = FUN4(VAR1, VAR3, &VAR4)) <= 0)
return VAR6;

VAR5 = *VAR3;

while ((VAR6 = FUN5(VAR1, VAR5, &VAR4)) > 0) {
;
}

if (VAR5->VAR9 == NULL) {
FUN2(VAR8, FUN3("",VAR5->VAR10));
FUN6(VAR5);
goto VAR11;
}

VAR11:
return VAR6;
}