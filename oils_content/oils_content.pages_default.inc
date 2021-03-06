<?php
/**
 * @file
 * oils_content.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function oils_content_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_http_response_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Bachelor\'s Program of Study Redirect',
    'contexts' => array(
      0 => array(
        'identifier' => 'Bachelor Program of Study',
        'keyword' => 'bachelor_pos',
        'name' => 'entity:node',
        'entity_id' => '29',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'current-students/bachelor-program-students/program-study',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'prospective-students/bachelors-program/program-study',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $export['node_view_http_response_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_http_response_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Master\'s Program of Study Redirect',
    'contexts' => array(
      0 => array(
        'identifier' => 'Bachelor Program of Study',
        'keyword' => 'bachelor_pos',
        'name' => 'entity:node',
        'entity_id' => '29',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'current-students/masters-program-students/program-study',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'prospective-students/masters-program/program-study',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $export['node_view_http_response_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_http_response_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Doctoral Program of Study Redirect',
    'contexts' => array(
      0 => array(
        'identifier' => 'Bachelor Program of Study',
        'keyword' => 'bachelor_pos',
        'name' => 'entity:node',
        'entity_id' => '29',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'current-students/phd-program-students/program-study',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'prospective-students/doctor-philosophy/program-study',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $export['node_view_http_response_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'OILS Employee Profile',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'employee-profile',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node from Node (on Node: Physical Location [field_physical_location])',
        'keyword' => 'node_location',
        'name' => 'entity_from_field:field_physical_location-node-node',
        'delta' => '0',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'employee' => 'employee',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'default' => NULL,
    ),
    'style' => 'naked',
  );
  $display->cache = array();
  $display->title = '%node:field_first_name %node:field_last_name';
  $display->uuid = '3de9336a-757b-4626-ba76-12fb46d58cc9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-45fb07b9-1c4d-4a63-8a7b-664e5d66c9a1';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Full name, Faculty Rank and Job Title',
      'title' => '',
      'body' => '<h1>%node:field_first_name %node:field_last_name</h1>

<h2>%node:field_faculty_rank<br />
%node:field_job_title</h2>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '45fb07b9-1c4d-4a63-8a7b-664e5d66c9a1';
    $display->content['new-45fb07b9-1c4d-4a63-8a7b-664e5d66c9a1'] = $pane;
    $display->panels['left'][0] = 'new-45fb07b9-1c4d-4a63-8a7b-664e5d66c9a1';
    $pane = new stdClass();
    $pane->pid = 'new-4629b046-4895-455d-bf03-3e73b9e8d15f';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4629b046-4895-455d-bf03-3e73b9e8d15f';
    $display->content['new-4629b046-4895-455d-bf03-3e73b9e8d15f'] = $pane;
    $display->panels['left'][1] = 'new-4629b046-4895-455d-bf03-3e73b9e8d15f';
    $pane = new stdClass();
    $pane->pid = 'new-341cf846-8d28-4fc5-8e92-6494fa79fd23';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Picture is empty',
            'php' => 'return empty($contexts[\'argument_entity_id:node_1\']->data->field_picture); ',
          ),
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Image',
      'title' => '',
      'body' => '<div><img alt="%node:field_first_name %node:field_last_name" src="%node:field-picture" /></div>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '341cf846-8d28-4fc5-8e92-6494fa79fd23';
    $display->content['new-341cf846-8d28-4fc5-8e92-6494fa79fd23'] = $pane;
    $display->panels['right'][0] = 'new-341cf846-8d28-4fc5-8e92-6494fa79fd23';
    $pane = new stdClass();
    $pane->pid = 'new-68c3effd-49fa-42f6-a2b1-e92145189e8c';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Contact Information',
      'title' => 'Contact Information',
      'body' => '<ul>
	<li><strong>Phone</strong>: (505) %node_location:field_phone_number</li>
	<li><strong>Office</strong>:&nbsp;%node_location:field_location %node_location:field_room_number</li>
	<li><strong>Email</strong>:&nbsp;%node:field_email</li>
</ul>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '68c3effd-49fa-42f6-a2b1-e92145189e8c';
    $display->content['new-68c3effd-49fa-42f6-a2b1-e92145189e8c'] = $pane;
    $display->panels['right'][1] = 'new-68c3effd-49fa-42f6-a2b1-e92145189e8c';
    $pane = new stdClass();
    $pane->pid = 'new-3791ea42-7ba9-42b8-9e73-2cd9610fbe1c';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-faculty_classes-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3791ea42-7ba9-42b8-9e73-2cd9610fbe1c';
    $display->content['new-3791ea42-7ba9-42b8-9e73-2cd9610fbe1c'] = $pane;
    $display->panels['right'][2] = 'new-3791ea42-7ba9-42b8-9e73-2cd9610fbe1c';
    $pane = new stdClass();
    $pane->pid = 'new-d0709fc8-8fe5-4fe2-b574-6e104420e8d2';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_research_interests';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd0709fc8-8fe5-4fe2-b574-6e104420e8d2';
    $display->content['new-d0709fc8-8fe5-4fe2-b574-6e104420e8d2'] = $pane;
    $display->panels['right'][3] = 'new-d0709fc8-8fe5-4fe2-b574-6e104420e8d2';
    $pane = new stdClass();
    $pane->pid = 'new-9cd4f186-ca06-49b9-a2ff-7603d364d4da';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_subjects';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => 'Research Interests',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '9cd4f186-ca06-49b9-a2ff-7603d364d4da';
    $display->content['new-9cd4f186-ca06-49b9-a2ff-7603d364d4da'] = $pane;
    $display->panels['right'][4] = 'new-9cd4f186-ca06-49b9-a2ff-7603d364d4da';
    $pane = new stdClass();
    $pane->pid = 'new-d850a813-6fad-4370-97f9-b9c614d6b0a8';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_web_sites';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'd850a813-6fad-4370-97f9-b9c614d6b0a8';
    $display->content['new-d850a813-6fad-4370-97f9-b9c614d6b0a8'] = $pane;
    $display->panels['right'][5] = 'new-d850a813-6fad-4370-97f9-b9c614d6b0a8';
    $pane = new stdClass();
    $pane->pid = 'new-7b9e238b-8ca0-4b3e-9d38-a166674645b6';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'cv link is empty',
            'php' => 'return empty($contexts[\'argument_entity_id:node_1\']->data->field_cv_link); ',
          ),
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'CV Link',
      'title' => '',
      'body' => '<p><a href="%node:field_cv_link">Curriculum Vitae</a></p>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '7b9e238b-8ca0-4b3e-9d38-a166674645b6';
    $display->content['new-7b9e238b-8ca0-4b3e-9d38-a166674645b6'] = $pane;
    $display->panels['right'][6] = 'new-7b9e238b-8ca0-4b3e-9d38-a166674645b6';
    $pane = new stdClass();
    $pane->pid = 'new-b0e6cbc3-5e3b-4c57-a978-c785272300da';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Research guide profile is empty',
            'php' => 'return empty($contexts[\'argument_entity_id:node_1\']->data->field_research_guide_profile); ',
          ),
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Research Guide Profile link',
      'title' => '',
      'body' => '<p><strong>Research Guide Profile</strong>: <a href="%node:field_research_guide_profile">%node:field_research_guide_profile</a></p>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'b0e6cbc3-5e3b-4c57-a978-c785272300da';
    $display->content['new-b0e6cbc3-5e3b-4c57-a978-c785272300da'] = $pane;
    $display->panels['right'][7] = 'new-b0e6cbc3-5e3b-4c57-a978-c785272300da';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Employee Location',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'employee-location',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'employee_location' => 'employee_location',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'zen_no_wrapper';
  $display->layout_settings = array(
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:field_location %node:field_room_number';
  $display->uuid = '360072bb-ac89-422d-bcd6-d77471f9daf1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a0ebedeb-1f7e-4711-ae22-7d0dc613dcdb';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<ul>
<li><span style="line-height: 1.538em;">Building and Room Number: %node:field_location&nbsp;%node:field_room_number</span></li>
<li>Phone: %node:field_phone_number</li>
<li>ID #: %node:title</li>
</ul>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a0ebedeb-1f7e-4711-ae22-7d0dc613dcdb';
    $display->content['new-a0ebedeb-1f7e-4711-ae22-7d0dc613dcdb'] = $pane;
    $display->panels['main'][0] = 'new-a0ebedeb-1f7e-4711-ae22-7d0dc613dcdb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a0ebedeb-1f7e-4711-ae22-7d0dc613dcdb';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_http_response';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Website Redirect',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => '%term',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'web_sites' => 'web_sites',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $export['term_view_http_response'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function oils_content_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'welcome_to_oi_ls';
  $page->task = 'page';
  $page->admin_title = 'Welcome to OI&LS';
  $page->admin_description = '';
  $page->path = 'welcome';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_welcome_to_oi_ls_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'welcome_to_oi_ls';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33_stacked';
  $display->layout_settings = array(
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'left' => NULL,
      'bottom' => NULL,
      'right' => NULL,
      'main' => NULL,
      'middle' => NULL,
    ),
    'right' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7faa0f47-674e-402d-859a-3e1a087ef708';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-15446d38-ffa9-424b-98c5-509d314d30ff';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-news-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'News and Events',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '15446d38-ffa9-424b-98c5-509d314d30ff';
    $display->content['new-15446d38-ffa9-424b-98c5-509d314d30ff'] = $pane;
    $display->panels['left'][0] = 'new-15446d38-ffa9-424b-98c5-509d314d30ff';
    $pane = new stdClass();
    $pane->pid = 'new-6c3311c8-c1b4-4742-a4d6-d05fd752880a';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-oils_videos-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6c3311c8-c1b4-4742-a4d6-d05fd752880a';
    $display->content['new-6c3311c8-c1b4-4742-a4d6-d05fd752880a'] = $pane;
    $display->panels['middle'][0] = 'new-6c3311c8-c1b4-4742-a4d6-d05fd752880a';
    $pane = new stdClass();
    $pane->pid = 'new-dc5797f6-2af6-4e5d-beee-721ddcf0e38d';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-faculty_list-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dc5797f6-2af6-4e5d-beee-721ddcf0e38d';
    $display->content['new-dc5797f6-2af6-4e5d-beee-721ddcf0e38d'] = $pane;
    $display->panels['right'][0] = 'new-dc5797f6-2af6-4e5d-beee-721ddcf0e38d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_welcome_to_oi_ls__panel_context_5ee21996-ffe7-402c-8672-619d3c325008';
  $handler->task = 'page';
  $handler->subtask = 'welcome_to_oi_ls';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Home 2',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array(
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'left' => NULL,
      'bottom' => NULL,
      'right' => NULL,
      'main' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
    ),
    'right' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7faa0f47-674e-402d-859a-3e1a087ef708';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-15446d38-ffa9-424b-98c5-509d314d30ff';
    $pane->panel = 'left_above';
    $pane->type = 'block';
    $pane->subtype = 'views-news-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'News and Events',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '15446d38-ffa9-424b-98c5-509d314d30ff';
    $display->content['new-15446d38-ffa9-424b-98c5-509d314d30ff'] = $pane;
    $display->panels['left_above'][0] = 'new-15446d38-ffa9-424b-98c5-509d314d30ff';
    $pane = new stdClass();
    $pane->pid = 'new-dc5797f6-2af6-4e5d-beee-721ddcf0e38d';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-faculty_list-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dc5797f6-2af6-4e5d-beee-721ddcf0e38d';
    $display->content['new-dc5797f6-2af6-4e5d-beee-721ddcf0e38d'] = $pane;
    $display->panels['middle'][0] = 'new-dc5797f6-2af6-4e5d-beee-721ddcf0e38d';
    $pane = new stdClass();
    $pane->pid = 'new-0ec6add5-8d2d-4e14-96cc-1f3f398e160a';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'block-35';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Student Testimonial',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0ec6add5-8d2d-4e14-96cc-1f3f398e160a';
    $display->content['new-0ec6add5-8d2d-4e14-96cc-1f3f398e160a'] = $pane;
    $display->panels['top'][0] = 'new-0ec6add5-8d2d-4e14-96cc-1f3f398e160a';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['welcome_to_oi_ls'] = $page;

  return $pages;

}
