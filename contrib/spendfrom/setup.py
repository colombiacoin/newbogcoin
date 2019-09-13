from distutils.core import setup
setup(name='bogspendfrom',
      version='1.0',
      description='Command-line utility for bogcoin "coin control"',
      author='Gavin Andresen',
      author_email='gavin@bogcoinfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
