static VAR1
FUN1(struct VAR2 *VAR3, size_t VAR4, warc_essential_hdr_t VAR5)
{
static const char VAR6[] = "";
static const char * const VAR7[VAR8] = {
NULL, "", "", "", NULL
};
char VAR9[48U];

if (VAR5.VAR10 == VAR11 || VAR5.VAR10 > VAR12) {

return -1;
}

FUN2(VAR3, VAR6);

FUN3(VAR3, "", VAR7[VAR5.VAR10]);

if (VAR5.VAR13 != NULL) {

static const char VAR14[] = "";
static const char VAR15[] = "VAR16:
const char *VAR17;
char *VAR18 = strchr(VAR5.VAR13, '');

if (VAR18 != NULL && VAR18[1U] == '' && VAR18[2U] == '') {

VAR17 = VAR14;
} else {

VAR17 = VAR15;
}
FUN3(VAR3,
"", VAR17, VAR5.VAR13);
}


FUN4(VAR3, "", VAR5.VAR19);


FUN4(VAR3, "", VAR5.VAR20);

if (VAR5.VAR21 == NULL) {

warc_uuid_t VAR17;

FUN5(&VAR17);

snprintf(
VAR9, sizeof(VAR9),
"",
VAR17.VAR17[0U],
VAR17.VAR17[1U] >> 16U, VAR17.VAR17[1U] & 0xffffU,
VAR17.VAR17[2U] >> 16U, VAR17.VAR17[2U] & 0xffffU,
VAR17.VAR17[3U]);
VAR5.VAR21 = VAR9;
}


FUN3(VAR3, "", VAR5.VAR21);

if (VAR5.VAR22 != NULL) {
FUN3(VAR3, "", VAR5.VAR22);
}


FUN3(VAR3, "", (VAR23)VAR5.VAR24);

FUN6(VAR3, "", 2);

return (FUN7(VAR3) >= VAR4)? -1: (VAR1)FUN7(VAR3);
}