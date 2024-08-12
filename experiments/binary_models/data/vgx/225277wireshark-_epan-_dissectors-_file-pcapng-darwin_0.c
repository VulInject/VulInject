void
FUN1(void)
{
static hf_register_info VAR1[] = {

{ &VAR2,
{ "",                                      "",
VAR3, VAR4, FUN2(VAR5), 0x00,
"", VAR6 }
},
{ &VAR7,
{ "",                         "",
VAR8, VAR9, NULL, 0x00,
"", VAR6 }
},
{ &VAR10,
{ "",                       "",
VAR11, VAR12, NULL, 0x00,
"", VAR6 }
},
{ &VAR13,
{ "",                       "",
VAR14, VAR12, NULL, 0x00,
"", VAR6 }
},
};

VAR15 = FUN3("", "", "");

FUN4(VAR15, VAR1, FUN5(VAR1));
}