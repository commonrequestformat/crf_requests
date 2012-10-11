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
                  "subject" : "New request \\u0022[node:title]\\u0022.",
                  "message" : "Request for information for \\u0022[node:title]\\u0022.",
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
