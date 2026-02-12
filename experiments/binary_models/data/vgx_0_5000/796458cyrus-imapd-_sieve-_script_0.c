static int _sieve_script_parse(sieve_interp_t *interp,
void *script_context, sieve_script_t **ret)
{
int res = interp_verify(interp);
if (res != SIEVE_OK) {
return res;
}

sieve_script_t *s = (sieve_script_t *) xzmalloc(sizeof(sieve_script_t));
s->interp = *interp;
s->script_context = script_context;


s->support = SIEVE_CAPA_BASE;

extern int sievelineno;
sievelineno = 1;            
if (sieveparse(s)) {
free_tree(s->cmds);
s->cmds = NULL;
}
if (s->err > 0) {
sieve_script_free(&s);
res = SIEVE_PARSE_ERROR;
}

*ret = s;
return res;
}