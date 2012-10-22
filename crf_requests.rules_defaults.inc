<?php
/**
 * @file
 * crf_requests.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function crf_requests_default_rules_configuration() {
  $items = array();
  $items['rules_email_clusters_on_new_request'] = entity_import('rules_config', '{ "rules_email_clusters_on_new_request" : {
      "LABEL" : "Email clusters on new request",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "rb_misc" ],
      "ON" : [ "node_insert" ],
      "IF" : [ { "data_is" : { "data" : [ "node:type" ], "value" : "crf_request" } } ],
      "DO" : [
        { "rb_misc_action_views_load_list" : {
            "USING" : { "view" : "contacts|default" },
            "PROVIDE" : { "node_list" : { "contacts" : "Contacts" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "contacts" ] },
            "ITEM" : { "contact" : "Current contact" },
            "DO" : [
              { "mail" : {
                  "to" : "[contact:field-contact-email]",
                  "subject" : "New Request for Information (from OCHA)",
                  "message" : "Dear [contact:field_contact_first_name] [contact:field_contact_lastname],\\r\\n\\r\\nOCHA ([node:author:name]) is requesting that you provide specific information as outlined below in the Information [node:title].\\r\\n\\r\\nnode:field-crf-req-contents:0\\r\\nnode:field-crf-req-contents:1\\r\\nnode:field-crf-req-contents:2\\r\\nnode:field-crf-req-contents:3\\r\\nnode:field-crf-req-contents:4\\r\\nnode:field-crf-req-contents:5\\r\\n\\r\\nWe kindly ask that you provide your input by Z  (where Z is a date inputed by OCHA for deadline of request).\\r\\n\\r\\nKindly provide your information online: [node:url]\\r\\n\\r\\nKind regards,\\r\\nOCHA",
                  "from" : [ "node:field-crf-req-contact:0:mail" ],
                  "language" : [ "" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
