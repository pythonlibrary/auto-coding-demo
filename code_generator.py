import  json

from jinja2 import Environment, FileSystemLoader, select_autoescape

env = Environment(
    loader=FileSystemLoader('.'),
    trim_blocks=True
    # autoescape=select_autoescape(['html', 'xml'])
)

srv31_template = env.get_template('srv31_pbconfig.ct')

with open('auto_coding_config.json', 'r') as f:
    config=json.load(f)

srv31_source_code = srv31_template.render(services=config['service_31'])

with open('srv31_pbconfig.c', 'w') as f:
    f.write(srv31_source_code)
