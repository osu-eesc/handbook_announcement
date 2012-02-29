<?php

/**
 * Implementation of hook_content_default_fields().
 */
function handbook_announcement_content_default_fields() {
  $fields = array();

  // Exported field: field_pnw_announcement_reference
  $fields['pnw_announcement-field_pnw_announcement_reference'] = array(
    'field_name' => 'field_pnw_announcement_reference',
    'type_name' => 'pnw_announcement',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      '5' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'handbook_article' => 'handbook_article',
      'handbook_page' => 'handbook_page',
      'pnw_announcement' => 0,
      'image' => 0,
      'link' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_pnw_announcement_reference][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Display on page',
      'weight' => '-2',
      'description' => 'Enter a few characters from the title of the page the announcement should be displayed on. When the title that you are looking for appears in the auto-complete list, select it. The announcement will appear at the top of that page within the Publish Dates entered above.',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_pnw_announcement_text
  $fields['pnw_announcement-field_pnw_announcement_text'] = array(
    'field_name' => 'field_pnw_announcement_text',
    'type_name' => 'pnw_announcement',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '10',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_pnw_announcement_text][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Announcement',
      'weight' => '-4',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_pww_announcement_date
  $fields['pnw_announcement-field_pww_announcement_date'] = array(
    'field_name' => 'field_pww_announcement_date',
    'type_name' => 'pnw_announcement',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      '5' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => 'required',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'short',
    'widget' => array(
      'default_value' => 'now',
      'default_value_code' => '',
      'default_value2' => 'strtotime',
      'default_value_code2' => '+30 days',
      'input_format' => 'm/d/Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-1:+3',
      'label_position' => 'above',
      'label' => 'Publish Dates',
      'weight' => '-3',
      'description' => 'Enter the start and end dates that this announcement should be displayed.',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Announcement');
  t('Display on page');
  t('Publish Dates');

  return $fields;
}
