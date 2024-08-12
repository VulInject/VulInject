cc_result FUN1 (VAR1       *VAR2,
VAR3 **VAR4,
VAR5  *VAR6)
{
cc_result VAR7 = VAR8;
cc_credentials_iterator_t VAR9 = (VAR10) VAR6;
cc_uint32 VAR11;

if (!VAR2 ) { VAR7 = FUN2 (VAR12); }
if (!VAR4  ) { VAR7 = FUN2 (VAR12); }
if (!VAR6) { VAR7 = FUN2 (VAR12); }

if (!VAR7) {
VAR7 = FUN3 (VAR9,
&VAR11);
}

while (!VAR7) {
cc_credentials_t VAR13 = NULL;

VAR7 = FUN4 (VAR9, &VAR13);

if (!VAR7 && (VAR13->VAR14->VAR15 & VAR11)) {

VAR7 = FUN5 (VAR13->VAR14,
VAR4);
break;
}

if (VAR13) { FUN6 (VAR13); }
}

return FUN7 (VAR7);
}