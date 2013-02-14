<?php
/**
 * @file
 * crf_requests.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function crf_requests_conditional_fields_default_fields() {
  $items = array();

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'crf_request',
    'dependent' => 'field_financial_tracking_service',
    'dependee' => 'field_crf_req_contents',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        218860149 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        200153887 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        52310416 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        30037204 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        218860149 => array(
          1 => '1',
          3 => 0,
        ),
        200153887 => array(
          1 => '1',
          3 => 0,
        ),
        52310416 => array(
          1 => '1',
          3 => 0,
        ),
        30037204 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => array(
        'fts_message' => 'fts_message',
        'hr_sitrep' => NULL,
        'indicator_data_batch' => NULL,
        'sectoral_analysis' => NULL,
        'contacts_upload' => NULL,
        'assessments_batch' => NULL,
      ),
      'value' => array(
        0 => array(
          'value' => 'fts_message',
        ),
      ),
      'values' => array(),
    ),
  );

  return $items;
}
