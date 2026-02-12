static int
selected(uid_t uid, char *locuser, au_event_t event, int sf)
{
int		sorf;
struct au_mask	mask;

mask.am_success = mask.am_failure = 0;
if (uid > MAXEPHUID) {

(void) auditon(A_GETKMASK, (caddr_t)&mask, sizeof (mask));
} else {
(void) au_user_mask(locuser, &mask);
}

if (sf == 0) {
sorf = AU_PRS_SUCCESS;
} else if (sf == -1) {
sorf = AU_PRS_FAILURE;
} else {
sorf = AU_PRS_BOTH;
}

return (au_preselect(event, &mask, sorf, AU_PRS_REREAD));
}