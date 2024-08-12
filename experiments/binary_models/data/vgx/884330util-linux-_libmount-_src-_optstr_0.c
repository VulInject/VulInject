int FUN1(const char *VAR1, char **VAR2,
const struct VAR3 *VAR4, int VAR5)
{
struct libmnt_optmap const *VAR6[1];
struct ul_buffer VAR7 = VAR8;
char *VAR9, *VAR10, *VAR11 = (char *) VAR1;
size_t VAR12, VAR13;
int VAR14 = 0;

if (!VAR1 || !VAR2)
return -VAR15;

VAR6[0] = VAR4;

FUN2(&VAR7, strlen(VAR1)/2);

while (!FUN3(&VAR11, &VAR9, &VAR12, &VAR10, &VAR13)) {
const struct VAR3 *VAR16;

FUN4(VAR6, 1, VAR9, VAR12, &VAR16);

if (!VAR16 || !VAR16->VAR17)
continue;	

if (VAR5 && (VAR16->VAR18 & VAR5))
continue;


if (VAR13 && FUN5(VAR16))
continue;

VAR14 = FUN6(&VAR7, VAR9, VAR12, VAR10, VAR13, 0);
if (VAR14)
break;
}

*VAR2  = VAR14 ? NULL : FUN7(&VAR7, NULL, NULL);
if (VAR14)
FUN8(&VAR7);
return VAR14;
}