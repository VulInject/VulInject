u16
fc_prlo_build(struct fchs_s *fchs, u32 d_id, u32 s_id, u16 ox_id,
int num_pages)
{
struct fc_prlo_s *prlo = (struct fc_prlo_s *) (fchs + 1);
int             page;

fc_els_req_build(fchs, d_id, s_id, ox_id);
memset(prlo, 0, (num_pages * 16) + 4);
prlo->command = FC_ELS_PRLO;
prlo->page_len = 0x10;
prlo->payload_len = cpu_to_be16((num_pages * 16) + 4);

for (page = 0; page < num_pages; page++) {
prlo->prlo_params[page].type = FC_TYPE_FCP;
prlo->prlo_params[page].opa_valid = 0;
prlo->prlo_params[page].rpa_valid = 0;
prlo->prlo_params[page].orig_process_assc = 0;
prlo->prlo_params[page].resp_process_assc = 0;
}

return be16_to_cpu(prlo->payload_len);
}