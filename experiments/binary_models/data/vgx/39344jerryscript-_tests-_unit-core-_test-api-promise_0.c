FUN1 (void)
{
jerry_value_t VAR1 = FUN2 ();


{
jerry_value_t VAR2 = FUN3 (VAR1);
FUN4 (FUN5 (VAR2));

jerry_promise_state_t VAR3 = FUN6 (VAR1);
FUN4 (VAR3 == VAR4);

FUN7 (VAR2);
}

jerry_value_t VAR5 = FUN8 ();
{
jerry_value_t VAR6 = FUN9 ((const VAR7 *) "");
jerry_value_t VAR8 = FUN10 (VAR5, VAR6, FUN11 (3));
FUN4 (FUN12 (VAR8) && (FUN13 (VAR8)));
FUN7 (VAR8);
FUN7 (VAR6);
}


{
jerry_value_t VAR9 = FUN14 (VAR1, VAR5, true);


FUN7 (VAR5);

jerry_value_t VAR2 = FUN3 (VAR1);
{
FUN4 (FUN15 (VAR2));
jerry_value_t VAR6 = FUN9 ((const VAR7 *) "");
jerry_value_t VAR10 = FUN16 (VAR2, VAR6);
FUN4 (FUN17 (VAR10));
FUN4 (FUN18 (VAR10) == 3.0);

FUN7 (VAR10);
FUN7 (VAR6);
}

jerry_promise_state_t VAR3 = FUN6 (VAR1);
FUN4 (VAR3 == VAR11);

FUN7 (VAR2);

FUN7 (VAR9);
}


{
jerry_value_t VAR9 = FUN14 (VAR1, FUN11 (50), false);

jerry_value_t VAR2 = FUN3 (VAR1);
{
FUN4 (FUN15 (VAR2));
jerry_value_t VAR6 = FUN9 ((const VAR7 *) "");
jerry_value_t VAR10 = FUN16 (VAR2, VAR6);
FUN4 (FUN17 (VAR10));
FUN4 (FUN18 (VAR10) == 3.0);

FUN7 (VAR10);
FUN7 (VAR6);
}

jerry_promise_state_t VAR3 = FUN6 (VAR1);
FUN4 (VAR3 == VAR11);

FUN7 (VAR2);

FUN7 (VAR9);
}

FUN7 (VAR1);
}