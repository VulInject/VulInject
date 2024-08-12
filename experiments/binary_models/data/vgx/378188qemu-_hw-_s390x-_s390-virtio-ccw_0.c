bool FUN1(void)
{
return FUN2()->VAR1;
}

static void VAR2##VAR3##FUN3(VAR4 *VAR5,            \
void *VAR6)                 \
{                                                                         \
VAR7 *VAR8 = FUN4(VAR5);                                 \
VAR2##VAR3##FUN5(VAR8);                             \
VAR8->VAR9 = "" VAR10;                  \
if (VAR11) {                                                         \
VAR8->VAR12 = "";                                    \
VAR8->VAR13 = true;                                            \
}                                                                     \
}                                                                         \
static void VAR2##VAR3##FUN6(VAR14 *VAR15)             \
{                                                                         \
VAR16 *VAR17 = FUN7(VAR15);                                 \
VAR18 = FUN8(FUN9(VAR17));          \
VAR2##VAR3##FUN10(VAR17);                     \
}                                                                         \
static const TypeInfo VAR2##VAR3##VAR19 = {                     \
.VAR20 = FUN11("" VAR10),                 \
.VAR21 = VAR22,                                      \
.VAR23 = VAR2##VAR3##VAR24,                      \
.VAR25 = VAR2##VAR3##VAR26,                \
};                                                                        \
static void VAR27##FUN12(void)                           \
{                                                                         \
FUN13(&VAR2##VAR3##VAR19);                   \
}                                                                         \
FUN14(VAR27##VAR3)

static void FUN15(VAR16 *VAR17)
{
}