rpmRC rpmdsParseRichDep(rpmds dep, rpmds *leftds, rpmds *rightds, rpmrichOp *op, char **emsg)
{
rpmRC rc;
struct rpmdsParseRichDepData data;
const char *depstr = rpmdsN(dep);
memset(&data, 0, sizeof(data));
data.dep = dep;
data.op = RPMRICHOP_SINGLE;
data.depflags = rpmdsFlags(dep) & ~(RPMSENSE_SENSEMASK | RPMSENSE_MISSINGOK);
rc = rpmrichParse(&depstr, emsg, rpmdsParseRichDepCB, &data);
if (rc == RPMRC_OK && *depstr) {
if (emsg)
rasprintf(emsg, _("Junk after rich dependency"));
rc = RPMRC_FAIL;
}
if (rc != RPMRC_OK) {
rpmdsFree(data.leftds);
rpmdsFree(data.rightds);
} else {
*leftds = data.leftds;
*rightds = data.rightds;
*op = data.op;
}
return rc;
}