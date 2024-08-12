VAR1[2] = (VAR2 >> 16) & 0xFF;
VAR1[3] = (VAR2 >> 24) & 0xFF;
memset (VAR1 + 4,
(VAR3->VAR4 & VAR5) ? 0 : 0xFF,
4);

FUN1(&VAR6);
FUN2(&VAR6, FUN3(), NULL, VAR7->VAR8.VAR9, VAR1 + 8, 1);
FUN4(&VAR6, VAR1, VAR1, 8);
FUN5(&VAR6);

FUN6 (VAR10,
VAR3->VAR11,
++VAR2);
FUN7(&VAR3->VAR12);

FUN8(VAR13, sizeof(VAR13), 0, sizeof(VAR13));
FUN8(&VAR14, sizeof(VAR14), 0, sizeof(VAR14));

*VAR15 = 0;
return VAR16;
}

static VAR17
VAR18
(VAR17 * VAR15,
const gsskrb5_ctx VAR3,
krb5_context VAR10,
gss_qop_t VAR19,
const gss_buffer_t VAR20,
gss_buffer_t VAR21,
VAR22 *VAR7
)
{
VAR23 *VAR1;
Checksum VAR24;
u_char VAR25[8];

int32_t VAR2;
size_t VAR26, VAR27;

krb5_crypto VAR28;
krb5_error_code VAR29;
krb5_data VAR30;
char *VAR31;
char VAR32[8];

FUN9 (36, &VAR26, &VAR27, VAR33);

VAR21->VAR34 = VAR27;
VAR21->VAR35  = malloc (VAR27);
if (VAR21->VAR35 == NULL) {
VAR21->VAR34 = 0;
*VAR15 = VAR36;
return VAR37;
}

VAR1 = FUN10(VAR21->VAR35,
VAR26,
"", 
VAR33);

memcpy (VAR1, "", 2);	
VAR1 += 2;

memcpy (VAR1, "", 4); 
VAR1 += 4;



VAR31 = malloc (VAR20->VAR34 + 8);
if (VAR31 == NULL) {
free (VAR21->VAR35);
VAR21->VAR35 = NULL;
VAR21->VAR34 = 0;
*VAR15 = VAR36;
return VAR37;
}
memcpy (VAR31, VAR1 - 8, 8);
memcpy (VAR31 + 8, VAR20->VAR35, VAR20->VAR34);

VAR29 = FUN11(VAR10, VAR7, 0, &VAR28);
if (VAR29) {
free (VAR21->VAR35);
VAR21->VAR35 = NULL;
VAR21->VAR34 = 0;
free (VAR31);
*VAR15 = VAR29;
return VAR37;
}

VAR29 = FUN12 (VAR10,
VAR28,
VAR38,
0,
VAR31,
VAR20->VAR34 + 8,
&VAR24);
free (VAR31);
FUN13 (VAR10, VAR28);
if (VAR29) {
free (VAR21->VAR35);
VAR21->VAR35 = NULL;
VAR21->VAR34 = 0;
*VAR15 = VAR29;
return VAR37;
}

memcpy (VAR1 + 8, VAR24.VAR39.VAR9, VAR24.VAR39.VAR34);

FUN14(&VAR3->VAR12);

FUN15 (VAR10,
VAR3->VAR11,
&VAR2);

VAR25[0] = (VAR2 >> 0)  & 0xFF;
VAR25[1] = (VAR2 >> 8)  & 0xFF;
VAR25[2] = (VAR2 >> 16) & 0xFF;
VAR25[3] = (VAR2 >> 24) & 0xFF;
memset (VAR25 + 4,
(VAR3->VAR4 & VAR5) ? 0 : 0xFF,
4);

VAR29 = FUN11(VAR10, VAR7,
VAR40, &VAR28);
if (VAR29) {
free (VAR21->VAR35);
VAR21->VAR35 = NULL;
VAR21->VAR34 = 0;
*VAR15 = VAR29;
return VAR37;
}

if (VAR3->VAR4 & VAR41)
memset(VAR32, 0, 8);
else
memcpy(VAR32, VAR1 + 8, 8);

VAR29 = FUN16 (VAR10,
VAR28,
VAR42,
VAR25, 8, &VAR30, VAR32);
FUN13 (VAR10, VAR28);
if (VAR29) {
free (VAR21->VAR35);
VAR21->VAR35 = NULL;
VAR21->VAR34 = 0;
*VAR15 = VAR29;
return VAR37;
}

assert (VAR30.VAR34 == 8);

memcpy (VAR1, VAR30.VAR9, VAR30.VAR34);
FUN17 (&VAR30);

FUN6 (VAR10,
VAR3->VAR11,
++VAR2);
FUN7(&VAR3->VAR12);

FUN18 (&VAR24);
*VAR15 = 0;
return VAR16;
}