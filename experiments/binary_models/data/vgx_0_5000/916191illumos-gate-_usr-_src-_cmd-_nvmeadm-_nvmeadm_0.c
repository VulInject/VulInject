static int
do_format_common(int fd, const nvme_process_arg_t *npa, unsigned long lbaf,
unsigned long ses)
{
nvme_process_arg_t ns_npa = { 0 };
nvmeadm_cmd_t cmd = { 0 };

if (npa->npa_isns &&
(npa->npa_ns_state & NVME_NS_STATE_ACTIVE) == 0) {
errx(-1, "cannot %s: namespace is inactive",
npa->npa_cmd->c_name);
}

cmd = *(npa->npa_cmd);
cmd.c_func = do_attach_detach;
cmd.c_name = "detach";
ns_npa = *npa;
ns_npa.npa_cmd = &cmd;

if (do_attach_detach(fd, &ns_npa) != 0)
return (exitcode);
if (nvme_format_nvm(fd, lbaf, ses) == B_FALSE) {
warn("%s failed", npa->npa_cmd->c_name);
exitcode += -1;
}
cmd.c_name = "attach";
exitcode += do_attach_detach(fd, &ns_npa);

return (exitcode);
}