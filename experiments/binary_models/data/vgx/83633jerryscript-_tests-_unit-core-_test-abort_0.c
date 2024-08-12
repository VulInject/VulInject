main (void)
{
FUN1 ();

FUN2 (VAR1);

jerry_value_t VAR2 = FUN3 ();
jerry_value_t VAR3 = FUN4 ((VAR4 *) "");
jerry_value_t VAR5 = FUN5 (VAR6);
jerry_value_t VAR7 = FUN6 (VAR2, VAR3, VAR5);
FUN7 (!FUN8 (VAR7));

FUN9 (VAR7);
FUN9 (VAR5);
FUN9 (VAR3);
FUN9 (VAR2);

const jerry_char_t VAR8[] = FUN10 (
""
""
""
""
""
""
""
""
""
);

jerry_value_t VAR9 = FUN11 (VAR8,
sizeof (VAR8) - 1,
NULL);

FUN7 (!FUN8 (VAR9));
VAR7 = FUN12 (VAR9);

FUN7 (FUN13 (VAR7));

FUN9 (VAR7);
FUN9 (VAR9);

const jerry_char_t VAR10[] = FUN10 (
""
""
""
""
""
""
""
""
""
""
""
""
""
""
""
""
""
""
);

VAR9 = FUN11 (VAR10,
sizeof (VAR10) - 1,
NULL);

FUN7 (!FUN8 (VAR9));
VAR7 = FUN12 (VAR9);

FUN7 (FUN13 (VAR7));

FUN9 (VAR7);
FUN9 (VAR9);


jerry_value_t VAR11 = FUN4 ((VAR4 *) "");
FUN7 (!FUN13 (VAR11));
FUN7 (!FUN8 (VAR11));

VAR11 = FUN14 (VAR11, true);
FUN7 (FUN13 (VAR11));
FUN7 (FUN8 (VAR11));

VAR11 = FUN15 (VAR11, true);
FUN7 (!FUN13 (VAR11));
FUN7 (FUN8 (VAR11));

VAR11 = FUN14 (VAR11, true);
FUN7 (FUN13 (VAR11));
FUN7 (FUN8 (VAR11));

FUN9 (VAR11);

FUN16 ();
return 0;
}