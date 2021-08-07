
# The fields must be updated with the information obtained from the capture
# =========================================================================
uid = 'FFFFFFFF'
sector_keys = ['FFFFFFFFFFFF','FFFFFFFFFFFF','FFFFFFFFFFFF']
sector_block_data = ['FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF','FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF','FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF'] # This will be decoded from hex 
# =========================================================================

first = '{}:{}'.format(sector_keys[0].upper(),bytes.fromhex(sector_block_data[0].strip('FF')).decode("utf-8"))
second = '{}:{}'.format(sector_keys[1].upper(),bytes.fromhex(sector_block_data[1].strip('FF')).decode("utf-8"))
third = '{}:{}'.format(sector_keys[2].upper(),bytes.fromhex(sector_block_data[2].strip('FF')).decode("utf-8"))

access_code = 'HHV{' + '{}_{}_{}_{}'.format(uid,first,second,third) + '}'
print(access_code)