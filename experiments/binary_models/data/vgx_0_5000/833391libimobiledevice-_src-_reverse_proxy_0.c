reverse_proxy_error_t reverse_proxy_send_plist(reverse_proxy_client_t client, plist_t plist)
{
reverse_proxy_error_t err;
uint32_t len = 0;
char* buf = NULL;
uint32_t bytes = 0;

plist_to_bin(plist, &buf, &len);

if (!buf) {
return REVERSE_PROXY_E_INVALID_ARG;
}

debug_info("Sending %u bytes", len);

uint32_t slen = htole32(len);
err = reverse_proxy_send(client, (char*)&slen, sizeof(slen), &bytes);
if (err != REVERSE_PROXY_E_SUCCESS) {
free(buf);
debug_info("ERROR: Unable to send data length, error %d. Sent %u/%u bytes.", err, bytes, (uint32_t)sizeof(slen));
return err;
}
uint32_t done = 0;
do {
bytes = 0;
err = reverse_proxy_send(client, buf+done, len-done, &bytes);
if (err != REVERSE_PROXY_E_SUCCESS) {
break;
}
done += bytes;
} while (done < len);
free(buf);
if (err != REVERSE_PROXY_E_SUCCESS || done != len) {
debug_info("ERROR: Unable to send data, error %d. Sent %u/%u bytes.", err, done, len);
return err;
}

debug_info("Sent %u bytes", len);

return REVERSE_PROXY_E_SUCCESS;
}