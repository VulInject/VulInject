void
FUN1(void)
{
static hf_register_info VAR1[] = {


{&VAR2,
{"", "",
VAR3, VAR4, NULL, 0xFFFFF000,
NULL, VAR5 }
},

{&VAR6,
{"", "",
VAR3, VAR4, FUN2(VAR7), 0xFFFFF000,
NULL, VAR5 }
},

{&VAR8,
{"", "",
VAR3, VAR9, NULL, 0x00000E00,
NULL, VAR5 }
},

{&VAR10,
{"", "",
VAR3, VAR9, NULL, 0x00000100,
NULL, VAR5 }
},

{&VAR11,
{"", "",
VAR3, VAR9, NULL, 0x000000FF,
NULL, VAR5 }
},


{&VAR12,
{"", "",
VAR13, VAR9, NULL, 0x0F,
"", VAR5 }
},

{&VAR14,
{"", "",
VAR13, VAR15, NULL, 0x0,
NULL, VAR5 }
},

{&VAR16,
{"", "",
VAR17, VAR15|VAR18, &VAR19, 0x0,
"", VAR5 }
},


{&VAR20,
{"", "",
VAR17, VAR15|VAR18, &VAR19, 0x0,
"", VAR5 }
},


{&VAR21,
{"", "",
VAR17, VAR15, NULL, 0x0FC0,
"", VAR5 }
},

{&VAR22,
{"", "",
VAR13, VAR9, NULL, 0x3F,
"", VAR5 }
},

{&VAR23,
{"", "",
VAR17, VAR9, NULL, 0x0,
"", VAR5 }
},
};

static VAR24 *VAR25[] = {
&VAR26,
&VAR27,
&VAR28,
&VAR29,
};

static ei_register_info VAR30[] = {
{ &VAR31, { "", VAR32, VAR33, "", VAR34 }},
{ &VAR35, { "", VAR36, VAR37, "", VAR34 }},
{ &VAR38, { "", VAR32, VAR33, "", VAR34 }},
{ &VAR39, { "", VAR36, VAR37, "", VAR34 }},
};


static build_valid_func VAR40[1] = {VAR41};
static decode_as_value_t VAR42 = {VAR43, 1, VAR40};
static decode_as_t VAR44 = {"", "", 1, 0, &VAR42, NULL, NULL,
VAR45, VAR46, VAR47, NULL};

static build_valid_func VAR48[1] = {VAR49};
static decode_as_value_t VAR50 = {VAR51, 1, VAR48};
static decode_as_t VAR52 = {"", "", 1, 0, &VAR50, NULL, NULL,
VAR45, VAR46, VAR47, NULL};

VAR53* VAR54;
VAR55 * VAR56;

VAR57 = FUN3("",
"", "");
VAR58 = FUN3(VAR59,
"", "");
VAR60 = FUN3("",
"", "");
VAR61 = FUN3("",
"", "");

FUN4(VAR57, VAR1, FUN5(VAR1));
FUN6(VAR25, FUN5(VAR25));
VAR54 = FUN7(VAR57);
FUN8(VAR54, VAR30, FUN5(VAR30));

VAR62 = FUN9("", VAR63, VAR57);
VAR64 = FUN9("", VAR65,VAR61);
VAR66 = FUN9("", VAR67, VAR60 );


VAR68 = FUN10("",
"",
VAR57, VAR3, VAR9);

VAR69  = FUN10("", "", VAR58, VAR17, VAR15);

VAR70  = FUN10("", "", VAR61, VAR17, VAR15);

VAR56 = FUN11( VAR57, NULL );

FUN12(VAR56, "");


FUN13(VAR56,
"",
"",
"",
&VAR71);

FUN14(&VAR44);
FUN14(&VAR52);
}