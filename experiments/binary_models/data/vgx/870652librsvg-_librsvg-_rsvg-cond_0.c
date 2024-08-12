static const guint VAR1 = FUN1 (VAR2);

static const char **VAR3 = NULL;
static const guint VAR4 = 0;

static int
FUN2 (const void *VAR5, const void *VAR6)
{
return strcmp ((const char *) VAR5, *(const char **) VAR6);
}