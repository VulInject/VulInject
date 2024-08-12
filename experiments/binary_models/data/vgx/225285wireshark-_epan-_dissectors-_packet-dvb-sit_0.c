void
FUN1(void)
{

static hf_register_info VAR1[] = {

{ &VAR2, {
"", "",
VAR3, VAR4, NULL, 0, NULL, VAR5
} },

{ &VAR6, {
"", "",
VAR7, VAR4, NULL, VAR8, NULL, VAR5
} },

{ &VAR9, {
"", "",
VAR7, VAR4, NULL, VAR10, NULL, VAR5
} },

{ &VAR11, {
"", "",
VAR7, VAR12, FUN2(VAR13), VAR14, NULL, VAR5
} },

{ &VAR15, {
"", "",
VAR7, VAR12, NULL, 0, NULL, VAR5
} },

{ &VAR16, {
"", "",
VAR7, VAR12, NULL, 0, NULL, VAR5
} },

{ &VAR17, {
"", "",
VAR3, VAR4, NULL, VAR18, NULL, VAR5
} },

{ &VAR19, {
"", "",
VAR3, VAR12, NULL, VAR20, NULL, VAR5
} },

{ &VAR21, {
"", "",
VAR3, VAR4, NULL, 0, NULL, VAR5
} },

{ &VAR22, {
"", "",
VAR3, VAR4, NULL, VAR23, NULL, VAR5
} },

{ &VAR24, {
"", "",
VAR3, VAR4, FUN2(VAR25), VAR26, NULL, VAR5
} },

{ &VAR27, {
"", "",
VAR3, VAR12, NULL, VAR28, NULL, VAR5
} }

};

static VAR29 *VAR30[] = {
&VAR31,
&VAR32
};

VAR33 = FUN3("", "", "");
VAR34 = FUN4("", VAR35, VAR33);

FUN5(VAR33, VAR1, FUN6(VAR1));
FUN7(VAR30, FUN6(VAR30));

}