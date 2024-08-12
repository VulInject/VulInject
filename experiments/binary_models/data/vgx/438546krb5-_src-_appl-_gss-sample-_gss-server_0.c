static void
FUN1(VAR1 *VAR2,
gss_name_t VAR3,
gss_buffer_t VAR4,
int VAR5)
{
OM_uint32 VAR6, VAR7;
gss_buffer_desc VAR8;
gss_buffer_desc VAR9;
int VAR10 = 0;
int VAR11 = 0;
int VAR12 = -1;
unsigned int VAR13;

while (VAR12 != 0) {
VAR8.VAR8 = NULL;
VAR9.VAR8 = NULL;

VAR6 = FUN2(VAR2, VAR3, VAR4, &VAR10,
&VAR11, &VAR8, &VAR9,
&VAR12);
if (FUN3(VAR6)) {
FUN4("", VAR6, *VAR2);
break;
}

FUN5("",
(int)VAR4->VAR14, (char *)VAR4->VAR8,
VAR10 ? "" : "",
VAR11 ? "" : "",
(int)VAR9.VAR14, (char *)VAR9.VAR8);

if (VAR5) {
for (VAR13 = 0; VAR13 < VAR8.VAR14; VAR13++) {
if ((VAR13 % 32) == 0)
FUN5("");
FUN5("", ((char *)VAR8.VAR8)[VAR13] & 0xFF);
}
FUN5("");
}

FUN6(&VAR7, &VAR8);
FUN6(&VAR7, &VAR9);
}
}