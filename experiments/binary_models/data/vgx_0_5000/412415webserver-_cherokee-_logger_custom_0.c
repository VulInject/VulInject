add_http_referer  (cherokee_template_t       *template,
cherokee_template_token_t *token,
cherokee_buffer_t         *output,
void                      *param)
{
ret_t                  ret;
char                  *referer     = NULL;
cuint_t                referer_len = 0;
cherokee_connection_t *conn        = CONN(param);

UNUSED (template);
UNUSED (token);

ret = cherokee_header_get_known (&conn->header, header_referer, &referer, &referer_len);
if (ret != ret_ok) {
cherokee_buffer_add_char (output, '-');
return ret_ok;
}

cherokee_buffer_add (output, referer, referer_len);
return ret_ok;
}