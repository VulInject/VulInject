typedef void (*VAR1)(VAR2 *VAR3);

static pydb_agent_create_f VAR4;
static pydb_agent_destroy_f VAR5;
static pydb_get_frameinfo_f VAR6;
static pydb_iter_init_f VAR7;
static pydb_iter_init_f VAR8;
static pydb_iter_init_f VAR9;
static pydb_iter_next_f VAR10;
static pydb_iter_fini_f VAR11;

static VAR12 *VAR13 = NULL;
static void *VAR14 = NULL;


static int
FUN1(uintptr_t VAR15, uint_t VAR16, int argc, const VAR17 *argv)
{
char VAR18[1024];
int VAR19 = VAR20;

if (FUN2(argc, argv,
'', VAR21, VAR22, &VAR19,
NULL) != argc) {
return (VAR23);
}

if (VAR16 & VAR24) {
FUN3("");
return (VAR25);
}

if (!(VAR16 & VAR26)) {
FUN3("");
return (VAR23);
}

if (FUN4(VAR13, VAR15, VAR18, sizeof (VAR18),
VAR19) < 0) {
FUN3("", VAR15);
return (VAR25);
}

FUN5("", VAR18);

return (VAR27);
}