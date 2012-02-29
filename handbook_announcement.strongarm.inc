<?php

/**
 * Implementation of hook_strongarm().
 */
function handbook_announcement_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_pnw_announcement';
  $strongarm->value = '';
  $export['ant_pattern_pnw_announcement'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_pnw_announcement';
  $strongarm->value = 0;
  $export['ant_php_pnw_announcement'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pnw_announcement';
  $strongarm->value = '0';
  $export['ant_pnw_announcement'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'better_formats_allowed_pnw_announcement';
  $strongarm->value = array(
    0 => 4,
  );
  $export['better_formats_allowed_pnw_announcement'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'better_formats_per_node_type';
  $strongarm->value = 1;
  $export['better_formats_per_node_type'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_pnw_announcement';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '0',
    'author' => '1',
    'options' => '-1',
    'menu' => '3',
    'book' => '5',
    'path' => '2',
    'path_redirect' => '4',
  );
  $export['content_extra_weights_pnw_announcement'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_pnw_announcement';
  $strongarm->value = '0';
  $export['language_content_type_pnw_announcement'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_pnw_announcement';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
    2 => 'revision',
  );
  $export['node_options_pnw_announcement'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pnw_announcement_pattern';
  $strongarm->value = 'announcements/[title-raw]';
  $export['pathauto_node_pnw_announcement_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_pnw_announcement';
  $strongarm->value = '1';
  $export['upload_pnw_announcement'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vertical_tabs_fieldsets_pnw_announcement';
  $strongarm->value = array(
    0 => 'menu',
    1 => 'book',
    2 => 'author',
    3 => 'revision_information',
    4 => 'options',
    5 => 'path',
  );
  $export['vertical_tabs_fieldsets_pnw_announcement'] = $strongarm;

  return $export;
}
