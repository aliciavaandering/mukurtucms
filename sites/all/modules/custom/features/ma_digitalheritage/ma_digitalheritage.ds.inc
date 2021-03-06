<?php
/**
 * @file
 * ma_digitalheritage.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ma_digitalheritage_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|digital_heritage|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'digital_heritage';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '27',
      'label' => 'above',
      'format' => 'author',
    ),
    'field_category' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'og_group_ref' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_community_ref' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_dh_type' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
  );
  $export['node|digital_heritage|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|digital_heritage|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'digital_heritage';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_media_asset' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'col-md-4 col-md-push-8',
        ),
      ),
    ),
  );
  $export['node|digital_heritage|search_result'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ma_digitalheritage_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|digital_heritage|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'digital_heritage';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_tabs',
        3 => 'group_essentials',
        5 => 'group_mukurtu_core',
        7 => 'group_licensing',
        8 => 'title',
        9 => 'group_dublin',
        10 => 'group_relations',
        12 => 'field_summary',
        13 => 'field_tk_body',
        15 => 'field_media_asset',
        17 => 'body',
        18 => 'og_group_ref',
        20 => 'field_description',
        22 => 'field_item_privacy_setting',
        23 => 'field_category',
        24 => 'field_tags',
        25 => 'field_creator',
        26 => 'field_contributor',
        27 => 'field_date',
        28 => 'field_format',
        29 => 'field_dh_type',
        30 => 'field_collection',
        31 => 'field_identifier',
        32 => 'field_related_dh_items',
        33 => 'field_language',
        34 => 'field_source',
        35 => 'field_subject',
        36 => 'field_coverage',
        37 => 'field_coverage_description',
        38 => 'field_publisher',
        39 => 'field_rights',
        40 => 'field_licence_trad',
        41 => 'field_licence_std_cc',
      ),
      'hidden' => array(
        1 => 'group_column_first',
        2 => 'group_general',
        4 => 'group_traditional',
        6 => 'group_cultural_narrative',
        11 => 'group_column_second',
        14 => 'path',
        16 => 'group_map',
        19 => 'field_community_ref',
        21 => 'redirect',
        42 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_tabs' => 'ds_content',
      'group_column_first' => 'hidden',
      'group_general' => 'hidden',
      'group_essentials' => 'ds_content',
      'group_traditional' => 'hidden',
      'group_mukurtu_core' => 'ds_content',
      'group_cultural_narrative' => 'hidden',
      'group_licensing' => 'ds_content',
      'title' => 'ds_content',
      'group_dublin' => 'ds_content',
      'group_relations' => 'ds_content',
      'group_column_second' => 'hidden',
      'field_summary' => 'ds_content',
      'field_tk_body' => 'ds_content',
      'path' => 'hidden',
      'field_media_asset' => 'ds_content',
      'group_map' => 'hidden',
      'body' => 'ds_content',
      'og_group_ref' => 'ds_content',
      'field_community_ref' => 'hidden',
      'field_description' => 'ds_content',
      'redirect' => 'hidden',
      'field_item_privacy_setting' => 'ds_content',
      'field_category' => 'ds_content',
      'field_tags' => 'ds_content',
      'field_creator' => 'ds_content',
      'field_contributor' => 'ds_content',
      'field_date' => 'ds_content',
      'field_format' => 'ds_content',
      'field_dh_type' => 'ds_content',
      'field_collection' => 'ds_content',
      'field_identifier' => 'ds_content',
      'field_related_dh_items' => 'ds_content',
      'field_language' => 'ds_content',
      'field_source' => 'ds_content',
      'field_subject' => 'ds_content',
      'field_coverage' => 'ds_content',
      'field_coverage_description' => 'ds_content',
      'field_publisher' => 'ds_content',
      'field_rights' => 'ds_content',
      'field_licence_trad' => 'ds_content',
      'field_licence_std_cc' => 'ds_content',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|digital_heritage|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|digital_heritage|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'digital_heritage';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_summary',
        1 => 'field_media_asset',
        2 => 'field_description',
        3 => 'body',
        4 => 'field_tk_body',
        5 => 'field_related_dh_items',
        6 => 'field_coverage',
        7 => 'field_coverage_description',
        8 => 'comments',
      ),
      'right' => array(
        9 => 'field_community_ref',
        10 => 'og_group_ref',
        11 => 'field_category',
        12 => 'field_tags',
        13 => 'field_collection',
        14 => 'field_date',
        15 => 'field_creator',
        16 => 'field_contributor',
        17 => 'field_language',
        18 => 'field_rights',
        19 => 'field_licence_trad',
        20 => 'field_licence_std_cc',
        21 => 'field_source',
        22 => 'field_publisher',
        23 => 'field_identifier',
        24 => 'field_subject',
        25 => 'field_dh_type',
        26 => 'field_format',
        27 => 'author',
      ),
    ),
    'fields' => array(
      'field_summary' => 'left',
      'field_media_asset' => 'left',
      'field_description' => 'left',
      'body' => 'left',
      'field_tk_body' => 'left',
      'field_related_dh_items' => 'left',
      'field_coverage' => 'left',
      'field_coverage_description' => 'left',
      'comments' => 'left',
      'field_community_ref' => 'right',
      'og_group_ref' => 'right',
      'field_category' => 'right',
      'field_tags' => 'right',
      'field_collection' => 'right',
      'field_date' => 'right',
      'field_creator' => 'right',
      'field_contributor' => 'right',
      'field_language' => 'right',
      'field_rights' => 'right',
      'field_licence_trad' => 'right',
      'field_licence_std_cc' => 'right',
      'field_source' => 'right',
      'field_publisher' => 'right',
      'field_identifier' => 'right',
      'field_subject' => 'right',
      'field_dh_type' => 'right',
      'field_format' => 'right',
      'author' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|digital_heritage|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|digital_heritage|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'digital_heritage';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_media_asset',
        1 => 'title',
        2 => 'field_description',
        3 => 'group_list_view_fields',
        4 => 'field_community_ref',
        5 => 'field_category',
        6 => 'field_collection',
        7 => 'field_summary',
      ),
    ),
    'fields' => array(
      'field_media_asset' => 'ds_content',
      'title' => 'ds_content',
      'field_description' => 'ds_content',
      'group_list_view_fields' => 'ds_content',
      'field_community_ref' => 'ds_content',
      'field_category' => 'ds_content',
      'field_collection' => 'ds_content',
      'field_summary' => 'ds_content',
    ),
    'limit' => array(
      'field_media_asset' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|digital_heritage|search_result'] = $ds_layout;

  return $export;
}
