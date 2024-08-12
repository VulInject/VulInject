static int FUN1(int in VAR1, int VAR2, void *VAR3)
{

struct child_process VAR4 = VAR5;
struct VAR6 *VAR7 = (struct VAR6 *)VAR3;
int VAR8, VAR9;


struct strbuf VAR10 = VAR11;
struct strbuf VAR12 = VAR11;
struct strbuf_expand_dict_entry VAR13[] = {
{ "", NULL, },
{ NULL, NULL, },
};


FUN2(&VAR12, VAR7->VAR12);
VAR13[0].VAR14 = VAR12.VAR15;


FUN3(&VAR10, VAR7->VAR10, VAR16, &VAR13);
FUN4(&VAR12);

FUN5(&VAR4.VAR17, VAR10.VAR15);
VAR4.VAR18 = 1;
VAR4.VAR19 = -1;
VAR4.VAR2 = VAR2;

if (FUN6(&VAR4)) {
FUN4(&VAR10);
return FUN7(FUN8(""),
VAR7->VAR10);
}

FUN9(VAR20, VAR21);

if (VAR7->VAR22) {
VAR8 = (FUN10(VAR4.VAR19,
VAR7->VAR22, VAR7->VAR23) < 0);
if (VAR24 == VAR25)
VAR8 = 0;
} else {
VAR8 = FUN11(VAR7->VAR26, VAR4.VAR19);
if (VAR8 == VAR27 && VAR24 == VAR25)
VAR8 = 0;
}

if (close(VAR4.VAR19))
VAR8 = 1;
if (VAR8)
FUN7(FUN8(""),
VAR7->VAR10);

FUN12(VAR20);

VAR9 = FUN13(&VAR4);
if (VAR9)
FUN7(FUN8(""), VAR7->VAR10, VAR9);

FUN4(&VAR10);
return (VAR8 || VAR9);
}