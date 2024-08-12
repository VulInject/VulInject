static int
FUN1(struct VAR1 *VAR2, const char *VAR3,
struct VAR4 *VAR5)
{
static const struct VAR6
VAR7[] = {
{ VAR8, -1 },
{ VAR9 , -1 },
{ VAR10 , -1 },
{}
};
static const struct VAR6
VAR11[] = {
{ VAR12, -1 },
{ VAR13 , -1 },
{ VAR14 , -1 },
{}
};
static const struct VAR6
VAR15[] = {
{ VAR16, -1 },
{ VAR17, -1 },
{ VAR18, -1 },
{ VAR19 , -1 },
{ VAR20 , -1 },
{}
};
u64 VAR21 = FUN2(VAR2->VAR22);
int VAR23;

snprintf(VAR5->VAR24, sizeof(VAR5->VAR24), "", VAR3);
VAR5->VAR2 = VAR2;
FUN3(&VAR5->mutex);
FUN4(VAR5);

FUN5(&VAR5->VAR25, VAR26);
FUN6(&VAR5->VAR27);
FUN3(&VAR5->VAR28);

if (VAR5 == &VAR2->VAR29) {
VAR23 = FUN7(NULL, VAR30, VAR31,
VAR5->VAR24, VAR21, &VAR5->VAR32);
} else {
FUN8(&VAR2->VAR29.VAR28);
VAR23 = FUN9(&VAR2->VAR29.VAR32, VAR5->VAR24, VAR21,
&VAR5->VAR32);
FUN10(&VAR2->VAR29.VAR28);
}
if (VAR23) {
FUN11(VAR33, VAR5, "", VAR23);
goto VAR34;
}

VAR23 = FUN12(&VAR5->VAR32.VAR35, "", 0, VAR36,
&(struct VAR37) {
.VAR21 = ~0,
.VAR38 = true,
}, sizeof(struct VAR37),
&VAR5->VAR21);
if (VAR23) {
FUN11(VAR33, VAR5, "", VAR23);
goto VAR34;
}

VAR23 = FUN13(&VAR5->VAR21.VAR35, VAR11);
if (VAR23 < 0) {
FUN11(VAR33, VAR5, "");
goto VAR34;
}

VAR23 = FUN14(&VAR5->VAR21.VAR35, "", VAR11[VAR23].VAR39,
&VAR5->VAR40);
if (VAR23) {
FUN11(VAR33, VAR5, "", VAR23);
goto VAR34;
}

VAR23 = FUN13(&VAR5->VAR40.VAR35, VAR15);
if (VAR23 < 0) {
FUN11(VAR33, VAR5, "");
goto VAR34;
}

VAR23 = FUN15(VAR5, VAR15[VAR23].VAR39, &VAR5->VAR41);
if (VAR23) {
FUN11(VAR33, VAR5, "", VAR23);
goto VAR34;
}

VAR23 = FUN13(&VAR5->VAR40.VAR35, VAR7);
if (VAR23 < 0) {
FUN11(VAR33, VAR5, "");
goto VAR34;
}

VAR5->VAR42 = &VAR7[VAR23];
return 0;
VAR34:
if (VAR23)
FUN16(VAR5);
return VAR23;
}