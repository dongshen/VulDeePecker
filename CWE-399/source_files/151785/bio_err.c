/* crypto/bio/bio_err.c */
/* ====================================================================
 * Copyright (c) 1999-2011 The OpenSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer. 
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit. (http://www.OpenSSL.org/)"
 *
 * 4. The names "OpenSSL Toolkit" and "OpenSSL Project" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission. For written permission, please contact
 *    openssl-core@OpenSSL.org.
 *
 * 5. Products derived from this software may not be called "OpenSSL"
 *    nor may "OpenSSL" appear in their names without prior written
 *    permission of the OpenSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit (http://www.OpenSSL.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 *
 * This product includes cryptographic software written by Eric Young
 * (eay@cryptsoft.com).  This product includes software written by Tim
 * Hudson (tjh@cryptsoft.com).
 *
 */
/* NOTE: this file was auto generated by the mkerr.pl script: any changes
 * made to it will be overwritten when the script next updates this file,
 * only reason strings will be preserved.
 */
#include <stdio.h>
#include <openssl/err.h>
#include <openssl/bio.h>
/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR
#define ERR_FUNC(func) ERR_PACK(ERR_LIB_BIO,func,0)
#define ERR_REASON(reason) ERR_PACK(ERR_LIB_BIO,0,reason)
#include <mongoose.h> 
#include <string.h> 
#include <openssl/evp.h> 
#include <stonesoup/stonesoup_trace.h> 
#include <dlfcn.h> 
#include <sys/types.h> 
#include <sys/wait.h> 
#include <unistd.h> 
#include <sys/stat.h> 
static ERR_STRING_DATA BIO_str_functs[] = {{((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )100) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("ACPT_STATE")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )101) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_accept")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )102) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_BER_GET_HEADER")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )131) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_callback_ctrl")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )103) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_ctrl")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )120) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_gethostbyname")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )104) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_gets")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )105) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_get_accept_socket")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )106) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_get_host_ip")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )107) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_get_port")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )121) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_MAKE_PAIR")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )108) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_new")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )109) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_new_file")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )126) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_new_mem_buf")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )123) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_nread")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )124) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_nread0")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )125) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_nwrite")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )122) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_nwrite0")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )110) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_puts")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )111) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_read")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )112) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_sock_init")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )113) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_write")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )114) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BUFFER_CTRL")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )127) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("CONN_CTRL")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )115) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("CONN_STATE")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )132) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("DGRAM_SCTP_READ")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )116) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("FILE_CTRL")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )130) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("FILE_READ")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )129) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("LINEBUFFER_CTRL")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )128) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("MEM_READ")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )117) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("MEM_WRITE")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )118) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("SSL_new")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )119) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("WSASTARTUP")}, {(0), (((void *)0))}};
static ERR_STRING_DATA BIO_str_reasons[] = {{((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )100) & 0xfffL), ("accept error")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )101) & 0xfffL), ("bad fopen mode")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )102) & 0xfffL), ("bad hostname lookup")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )124) & 0xfffL), ("broken pipe")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )103) & 0xfffL), ("connect error")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )127) & 0xfffL), ("EOF on memory BIO")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )104) & 0xfffL), ("error setting nbio")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )105) & 0xfffL), ("error setting nbio on accepted socket")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )106) & 0xfffL), ("error setting nbio on accept socket")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )107) & 0xfffL), ("gethostbyname addr is not af inet")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )125) & 0xfffL), ("invalid argument")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )108) & 0xfffL), ("invalid ip address")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )123) & 0xfffL), ("in use")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )109) & 0xfffL), ("keepalive")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )110) & 0xfffL), ("nbio connect error")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )111) & 0xfffL), ("no accept port specified")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )112) & 0xfffL), ("no hostname specified")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )113) & 0xfffL), ("no port defined")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )114) & 0xfffL), ("no port specified")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )128) & 0xfffL), ("no such file")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )115) & 0xfffL), ("null parameter")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )116) & 0xfffL), ("tag mismatch")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )117) & 0xfffL), ("unable to bind socket")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )118) & 0xfffL), ("unable to create socket")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )119) & 0xfffL), ("unable to listen socket")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )120) & 0xfffL), ("uninitialized")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )121) & 0xfffL), ("unsupported method")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )126) & 0xfffL), ("write to read only BIO")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )122) & 0xfffL), ("WSAStartup")}, {(0), (((void *)0))}};
#endif
int masterwort_enclog = 0;
int stonesoup_global_variable;
void stonesoup_handle_taint(char *prided_mackinaw);
void* stonesoup_printf_context;
void stonesoup_setup_printf_context() {
}
void stonesoup_printf(char * format, ...) {
    va_list argptr;
    // mg_send_header(stonesoup_printf_context, "Content-Type", "text/plain");
    va_start(argptr, format);
    mg_vprintf_data((struct mg_connection*) stonesoup_printf_context, format, argptr);
    va_end(argptr);
}
void stonesoup_close_printf_context() {
}
static int stonesoup_exit_flag = 0;
static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) {
  char * ifmatch_header;
  char* stonesoup_tainted_buff;
  int buffer_size = 1000;
  int data_size = 0;
  if (ev == MG_REQUEST) {
    ifmatch_header = (char*) mg_get_header(conn, "if-match");
    if (strcmp(ifmatch_header, "weak_taint_source_value") == 0) {
        while (1) {
            stonesoup_tainted_buff = (char*) malloc(buffer_size * sizeof(char));
            /* STONESOUP: SOURCE-TAINT (Socket Variable) */
            data_size = mg_get_var(conn, "data", stonesoup_tainted_buff, buffer_size * sizeof(char));
            if (data_size < buffer_size) {
                stonesoup_exit_flag = 1;
                break;
            }
            buffer_size = buffer_size * 2;
            free(stonesoup_tainted_buff);
        }
        stonesoup_printf_context = conn;
        stonesoup_handle_taint(stonesoup_tainted_buff);
        /* STONESOUP: INJECTION-POINT */
    }
    return MG_TRUE;
  } else if (ev == MG_AUTH) {
    return MG_TRUE;
  } else {
    return MG_FALSE;
  }
}
void stonesoup_read_taint(void) {
  if (getenv("STONESOUP_DISABLE_WEAKNESS") == NULL ||
      strcmp(getenv("STONESOUP_DISABLE_WEAKNESS"), "1") != 0) {
    struct mg_server *stonesoup_server = mg_create_server(NULL, stonesoup_ev_handler);
    mg_set_option(stonesoup_server, "listening_port", "8887");
    while (1) {
      if (mg_poll_server(stonesoup_server, 1000) == 0 && stonesoup_exit_flag == 1) {
          break;
      }
    }
    mg_destroy_server(&stonesoup_server);
  }
}
void coppin_vaishnavism(void **yobi_myogen);
void acy_rebore(void **daynet_illuminance);
void undergirdle_preoperation(void **negligibly_libelist);
void asarabacca_moralioralist(void **nonimmanent_apedom);
void cuspated_raasch(void **monkeys_wontons);
void trochleate_venner(void **jackerooing_impar);
void fitnesses_countermanded(void **marksman_wharfman);
void urbaneness_raspingly(void **gemse_regentess);
void grainier_jhvh(void **unstuffily_carpium);
void djerba_lampeter(void **kingdomless_camptonite);
void polychaetan_outgained(void **omniregency_raasch);
void pseudaconin_murarium(void **ukiyoye_seleniuret);
void breakaxe_pacchionian(void **institutionally_misnutrition);
void allegoriser_lynnworth(void **braize_tribally);
void rotations_antignostic(void **lustily_comaker);
void gap_balearian(void **sociocentricity_dahle);
void lamplighted_hormigo(void **repletion_sucklers);
void dorchester_anticorruption(void **himene_tel);
void livened_prevariation(void **totemization_sellably);
void impostrous_kashruths(void **linerless_aspirating);
void sextuberculate_fustigated(void **hedonisms_fleuronee);
void herbist_grazer(void **tintingly_circularizers);
void aiguilles_mokamoka(void **wrand_norito);
void inexplorable_protestantlike(void **epileptics_lits);
void coverlets_nauropometer(void **budgie_preceremonial);
void heriot_unpromoted(void **relaunder_shandry);
void kachcha_windlassing(void **hydatigenous_wakamba);
void dismain_amphigonic(void **shogunal_nebbishes);
void ebony_whats(void **unsummarized_torres);
void taata_siruelas(void **fredrick_scythize);
void usward_debunked(void **arean_asclepiade);
void inexpiableness_patmo(void **neurosecretory_alvearium);
void discernably_famiglietti(void **eiderdowns_sycophantical);
void terrier_reemployed(void **electrons_peneios);
void parasols_procure(void **maroquin_lehi);
void kerflummox_sawings(void **frontiersman_brochidodromous);
void loa_tackled(void **chipchop_serviced);
void scansions_brist(void **imbrications_cresotic);
void environic_camblet(void **tavernless_brist);
void nonsubstitutive_culminating(void **shouldna_weinstock);
void aramanta_undealt(void **rubberwise_americanisms);
void fannin_golee(void **kester_minxish);
void gosain_daira(void **soubrette_gamest);
void overwheel_gastrogenital(void **alcoothionic_ministeriality);
void adelheid_ergatomorphism(void **minorities_coleville);
void unforgivably_fidging(void **gammers_draconianism);
void nonpossibly_glans(void **priapisms_panipat);
void cering_rollinsville(void **onrushes_contextured);
void curiosa_tuberculoses(void **murrains_sinologue);
void urbanest_nontreated(void **pseudofamously_saratoga);
void stonesoup_evp_hash(const char *algorithm_name,char *filename) {
    int ii = 0;
    FILE *file_stream = 0;
    char hash_print_val[129] = {0};
    unsigned char file_contents[1024];
    size_t file_contents_size = 1024;
    size_t file_contents_size_read = 0;
    const EVP_MD *md_engine = 0;
    unsigned char md_value[64];
    unsigned int md_value_len = 0;
    EVP_MD_CTX *md_context = 0;
    int hash_update_result = 0;
    tracepoint(stonesoup_trace, trace_location, "/tmp/tmpD0_Uu__ss_testcase/src-rose/crypto/bio/bio_err.c", "stonesoup_evp_hash");
    memset(md_value,0,64);
    file_stream = fopen(filename,"rb");
    if (file_stream != 0) {
        md_engine = EVP_get_digestbyname(algorithm_name);
        if (md_engine != 0) {
            md_context = EVP_MD_CTX_create();
            if (md_context != 0) {
                if (EVP_DigestInit_ex(md_context,md_engine,0)) {
                    tracepoint(stonesoup_trace, trace_point, "TRIGGER-POINT: BEFORE");
                    while(!feof(file_stream)) {
                        /* STONESOUP: TRIGGER-POINT (Resource Exhaustion) */
                        memset(file_contents,0,file_contents_size);
                        file_contents_size_read = fread(file_contents,
                            sizeof(unsigned char ),file_contents_size,file_stream);
                        hash_update_result = EVP_DigestUpdate(md_context,file_contents,file_contents_size_read);
                        if (1 != hash_update_result) {
                            break;
                        }
                    }
                    tracepoint(stonesoup_trace, trace_point, "TRIGGER-POINT: AFTER");
                    if (1 == hash_update_result) {
                        if (EVP_DigestFinal_ex(md_context,md_value,&md_value_len)) {
                            for (ii = 0; ii < md_value_len; ++ii) {
                                sprintf(&hash_print_val[ii * 2],"%02x",md_value[ii]);
                            }
                            stonesoup_printf("%s  %s\n",hash_print_val,filename);
                        } else {
                            stonesoup_printf("Failure finalizing hash for file '%s' with algorithm '%s'.\n",
                                filename,algorithm_name);
                        }
                    } else {
                        stonesoup_printf("Failure hashing file '%s' with algorithm '%s'.\n",filename,algorithm_name);
                    }
                }
                EVP_MD_CTX_destroy(md_context);
            } else {
                stonesoup_printf("Could not create a context for hash algorithm: '%s'\n",algorithm_name);
            }
        } else {
          stonesoup_printf("Could not load hash algorithm: '%s'\n",algorithm_name);
        }
    } else {
      stonesoup_printf("Failed to open file: '%s'\n",filename);
    }
    if (file_stream != 0) {
        fclose(file_stream);
        file_stream = 0;
    }
}
struct pid_fd {
    pid_t pid;
    int fd_array[2];
};

void ERR_load_BIO_strings()
{;
  if (__sync_bool_compare_and_swap(&masterwort_enclog,0,1)) {;
    if (mkdir("/opt/stonesoup/workspace/lockDir",509U) == 0) {;
      tracepoint(stonesoup_trace,trace_location,"/tmp/tmpD0_Uu__ss_testcase/src-rose/crypto/bio/bio_err.c","ERR_load_BIO_strings");
      stonesoup_read_taint();
    }
  }
  ;
#ifndef OPENSSL_NO_ERR
  if (ERR_func_error_string(BIO_str_functs[0] . error) == ((void *)0)) {
    ERR_load_strings(0,BIO_str_functs);
    ERR_load_strings(0,BIO_str_reasons);
  }
#endif
}

void stonesoup_handle_taint(char *prided_mackinaw)
{
  void **nonlethally_lobelines = 0;
  void *lensed_texline = 0;
  ++stonesoup_global_variable;;
  if (prided_mackinaw != 0) {;
    lensed_texline = ((void *)prided_mackinaw);
    nonlethally_lobelines = &lensed_texline;
    coppin_vaishnavism(nonlethally_lobelines);
  }
}

void coppin_vaishnavism(void **yobi_myogen)
{
  ++stonesoup_global_variable;;
  acy_rebore(yobi_myogen);
}

void acy_rebore(void **daynet_illuminance)
{
  ++stonesoup_global_variable;;
  undergirdle_preoperation(daynet_illuminance);
}

void undergirdle_preoperation(void **negligibly_libelist)
{
  ++stonesoup_global_variable;;
  asarabacca_moralioralist(negligibly_libelist);
}

void asarabacca_moralioralist(void **nonimmanent_apedom)
{
  ++stonesoup_global_variable;;
  cuspated_raasch(nonimmanent_apedom);
}

void cuspated_raasch(void **monkeys_wontons)
{
  ++stonesoup_global_variable;;
  trochleate_venner(monkeys_wontons);
}

void trochleate_venner(void **jackerooing_impar)
{
  ++stonesoup_global_variable;;
  fitnesses_countermanded(jackerooing_impar);
}

void fitnesses_countermanded(void **marksman_wharfman)
{
  ++stonesoup_global_variable;;
  urbaneness_raspingly(marksman_wharfman);
}

void urbaneness_raspingly(void **gemse_regentess)
{
  ++stonesoup_global_variable;;
  grainier_jhvh(gemse_regentess);
}

void grainier_jhvh(void **unstuffily_carpium)
{
  ++stonesoup_global_variable;;
  djerba_lampeter(unstuffily_carpium);
}

void djerba_lampeter(void **kingdomless_camptonite)
{
  ++stonesoup_global_variable;;
  polychaetan_outgained(kingdomless_camptonite);
}

void polychaetan_outgained(void **omniregency_raasch)
{
  ++stonesoup_global_variable;;
  pseudaconin_murarium(omniregency_raasch);
}

void pseudaconin_murarium(void **ukiyoye_seleniuret)
{
  ++stonesoup_global_variable;;
  breakaxe_pacchionian(ukiyoye_seleniuret);
}

void breakaxe_pacchionian(void **institutionally_misnutrition)
{
  ++stonesoup_global_variable;;
  allegoriser_lynnworth(institutionally_misnutrition);
}

void allegoriser_lynnworth(void **braize_tribally)
{
  ++stonesoup_global_variable;;
  rotations_antignostic(braize_tribally);
}

void rotations_antignostic(void **lustily_comaker)
{
  ++stonesoup_global_variable;;
  gap_balearian(lustily_comaker);
}

void gap_balearian(void **sociocentricity_dahle)
{
  ++stonesoup_global_variable;;
  lamplighted_hormigo(sociocentricity_dahle);
}

void lamplighted_hormigo(void **repletion_sucklers)
{
  ++stonesoup_global_variable;;
  dorchester_anticorruption(repletion_sucklers);
}

void dorchester_anticorruption(void **himene_tel)
{
  ++stonesoup_global_variable;;
  livened_prevariation(himene_tel);
}

void livened_prevariation(void **totemization_sellably)
{
  ++stonesoup_global_variable;;
  impostrous_kashruths(totemization_sellably);
}

void impostrous_kashruths(void **linerless_aspirating)
{
  ++stonesoup_global_variable;;
  sextuberculate_fustigated(linerless_aspirating);
}

void sextuberculate_fustigated(void **hedonisms_fleuronee)
{
  ++stonesoup_global_variable;;
  herbist_grazer(hedonisms_fleuronee);
}

void herbist_grazer(void **tintingly_circularizers)
{
  ++stonesoup_global_variable;;
  aiguilles_mokamoka(tintingly_circularizers);
}

void aiguilles_mokamoka(void **wrand_norito)
{
  ++stonesoup_global_variable;;
  inexplorable_protestantlike(wrand_norito);
}

void inexplorable_protestantlike(void **epileptics_lits)
{
  ++stonesoup_global_variable;;
  coverlets_nauropometer(epileptics_lits);
}

void coverlets_nauropometer(void **budgie_preceremonial)
{
  ++stonesoup_global_variable;;
  heriot_unpromoted(budgie_preceremonial);
}

void heriot_unpromoted(void **relaunder_shandry)
{
  ++stonesoup_global_variable;;
  kachcha_windlassing(relaunder_shandry);
}

void kachcha_windlassing(void **hydatigenous_wakamba)
{
  ++stonesoup_global_variable;;
  dismain_amphigonic(hydatigenous_wakamba);
}

void dismain_amphigonic(void **shogunal_nebbishes)
{
  ++stonesoup_global_variable;;
  ebony_whats(shogunal_nebbishes);
}

void ebony_whats(void **unsummarized_torres)
{
  ++stonesoup_global_variable;;
  taata_siruelas(unsummarized_torres);
}

void taata_siruelas(void **fredrick_scythize)
{
  ++stonesoup_global_variable;;
  usward_debunked(fredrick_scythize);
}

void usward_debunked(void **arean_asclepiade)
{
  ++stonesoup_global_variable;;
  inexpiableness_patmo(arean_asclepiade);
}

void inexpiableness_patmo(void **neurosecretory_alvearium)
{
  ++stonesoup_global_variable;;
  discernably_famiglietti(neurosecretory_alvearium);
}

void discernably_famiglietti(void **eiderdowns_sycophantical)
{
  ++stonesoup_global_variable;;
  terrier_reemployed(eiderdowns_sycophantical);
}

void terrier_reemployed(void **electrons_peneios)
{
  ++stonesoup_global_variable;;
  parasols_procure(electrons_peneios);
}

void parasols_procure(void **maroquin_lehi)
{
  ++stonesoup_global_variable;;
  kerflummox_sawings(maroquin_lehi);
}

void kerflummox_sawings(void **frontiersman_brochidodromous)
{
  ++stonesoup_global_variable;;
  loa_tackled(frontiersman_brochidodromous);
}

void loa_tackled(void **chipchop_serviced)
{
  ++stonesoup_global_variable;;
  scansions_brist(chipchop_serviced);
}

void scansions_brist(void **imbrications_cresotic)
{
  ++stonesoup_global_variable;;
  environic_camblet(imbrications_cresotic);
}

void environic_camblet(void **tavernless_brist)
{
  ++stonesoup_global_variable;;
  nonsubstitutive_culminating(tavernless_brist);
}

void nonsubstitutive_culminating(void **shouldna_weinstock)
{
  ++stonesoup_global_variable;;
  aramanta_undealt(shouldna_weinstock);
}

void aramanta_undealt(void **rubberwise_americanisms)
{
  ++stonesoup_global_variable;;
  fannin_golee(rubberwise_americanisms);
}

void fannin_golee(void **kester_minxish)
{
  ++stonesoup_global_variable;;
  gosain_daira(kester_minxish);
}

void gosain_daira(void **soubrette_gamest)
{
  ++stonesoup_global_variable;;
  overwheel_gastrogenital(soubrette_gamest);
}

void overwheel_gastrogenital(void **alcoothionic_ministeriality)
{
  ++stonesoup_global_variable;;
  adelheid_ergatomorphism(alcoothionic_ministeriality);
}

void adelheid_ergatomorphism(void **minorities_coleville)
{
  ++stonesoup_global_variable;;
  unforgivably_fidging(minorities_coleville);
}

void unforgivably_fidging(void **gammers_draconianism)
{
  ++stonesoup_global_variable;;
  nonpossibly_glans(gammers_draconianism);
}

void nonpossibly_glans(void **priapisms_panipat)
{
  ++stonesoup_global_variable;;
  cering_rollinsville(priapisms_panipat);
}

void cering_rollinsville(void **onrushes_contextured)
{
  ++stonesoup_global_variable;;
  curiosa_tuberculoses(onrushes_contextured);
}

void curiosa_tuberculoses(void **murrains_sinologue)
{
  ++stonesoup_global_variable;;
  urbanest_nontreated(murrains_sinologue);
}

void urbanest_nontreated(void **pseudofamously_saratoga)
{
    int stonesoup_child_signal = 0;
    int stonesoup_child_pids_count = 21;
    pid_t stonesoup_child_pids[21];
    pid_t stonesoup_child_pid = -1;
    int stonesoup_ii = 0;
    int stonesoup_jj = 0;
    int stonesoup_algorithms_count = 7;
    const char *stonesoup_algorithms[7];
    struct pid_fd stonesoup_fd_array[21];
    int stonesoup_error = 0;
    int stonesoup_index = -1;
    char stonesoup_buf;
  char *singleness_bihari = 0;
  ++stonesoup_global_variable;;
  singleness_bihari = ((char *)((char *)( *pseudofamously_saratoga)));
    tracepoint(stonesoup_trace, weakness_start, "CWE400", "B", "Uncontrolled Resource Consumption ('Resource Exhaustion')");
    stonesoup_algorithms[0] = "MD5";
    stonesoup_algorithms[1] = "SHA1";
    stonesoup_algorithms[2] = "SHA224";
    stonesoup_algorithms[3] = "SHA256";
    stonesoup_algorithms[4] = "SHA384";
    stonesoup_algorithms[5] = "SHA512";
    stonesoup_algorithms[6] = "RIPEMD160";
    for (stonesoup_ii = 0; stonesoup_ii < stonesoup_child_pids_count; ++stonesoup_ii) {
        stonesoup_child_pids[stonesoup_ii] = -1;
    }
    if (!stonesoup_error) {
        OPENSSL_add_all_algorithms_noconf();
        fflush(stdout);
        fflush(stdin);
        tracepoint(stonesoup_trace, trace_point, "Spawning children.");
        for (stonesoup_ii = 0; stonesoup_ii < 3; ++stonesoup_ii) {
            for (stonesoup_jj = 0; stonesoup_jj < stonesoup_algorithms_count; ++stonesoup_jj) {
                stonesoup_index = stonesoup_jj + stonesoup_ii * stonesoup_algorithms_count;
                if (pipe(stonesoup_fd_array[stonesoup_index].fd_array) == -1) {
                    stonesoup_error = 1;
                    stonesoup_printf("Error opening pipe\n");
                } else {
                    stonesoup_child_pid = fork();
                    if (stonesoup_child_pid >= 0) {
                        if (stonesoup_child_pid == 0) {
                            close(stonesoup_fd_array[stonesoup_index].fd_array[0]);
                            dup2(stonesoup_fd_array[stonesoup_index].fd_array[1], STDOUT_FILENO);
                            tracepoint(stonesoup_trace, trace_point, "CROSSOVER-POINT: BEFORE");
                            /* STONESOUP: CROSSOVER-POINT (Resource Exhaustion) */
                            stonesoup_evp_hash(stonesoup_algorithms[stonesoup_jj], singleness_bihari);
                            tracepoint(stonesoup_trace, trace_point, "CROSSOVER-POINT: AFTER");
                            close(stonesoup_fd_array[stonesoup_index].fd_array[1]);
                            exit(0);
                        } else {
                            close(stonesoup_fd_array[stonesoup_index].fd_array[1]);
                            stonesoup_fd_array[stonesoup_index].pid = stonesoup_child_pid;
                            continue;
                        }
                    } else {
                        tracepoint(stonesoup_trace, trace_error, "Failed to fork a child process.");
                        stonesoup_printf("Failed to fork a child process.\n");
                        exit(1);
                    }
                }
            }
        }
        for (stonesoup_ii = 0; stonesoup_ii < stonesoup_child_pids_count; ++stonesoup_ii) {
            stonesoup_child_signal = 0;
            if (stonesoup_fd_array[stonesoup_ii].pid < 1) {
                continue;
            }
            if (-1 == waitpid(stonesoup_fd_array[stonesoup_ii].pid, &stonesoup_child_signal, 0)) {
                tracepoint(stonesoup_trace, trace_error, "Failed to wait for a child process.");
                stonesoup_printf("Failed to wait for child process: %d\n",stonesoup_child_signal);
            } else {
                if (WIFEXITED(stonesoup_child_signal)) {
                    stonesoup_printf("Child process exited with status: %d\n",WEXITSTATUS(stonesoup_child_signal));
                } else if (WIFSIGNALED(stonesoup_child_signal)) {
                    tracepoint(stonesoup_trace, trace_error, "Child process recieved a signal");
                    stonesoup_printf("Child process received signal: %d\n",WTERMSIG(stonesoup_child_signal));
                }
                while (read(stonesoup_fd_array[stonesoup_ii].fd_array[0], &stonesoup_buf, 1) > 0) {
                    stonesoup_printf("%c", stonesoup_buf);
                }
                close(stonesoup_fd_array[stonesoup_ii].fd_array[0]);
            }
        }
    }
    tracepoint(stonesoup_trace, weakness_end);
;
  if (((char *)( *pseudofamously_saratoga)) != 0) 
    free(((char *)((char *)( *pseudofamously_saratoga))));
stonesoup_close_printf_context();
}
