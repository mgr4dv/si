# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from adhoc_communication/ExpFrontierElement.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ExpFrontierElement(genpy.Message):
  _md5sum = "a783300e6ed76ebb52feb001fc044546"
  _type = "adhoc_communication/ExpFrontierElement"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int64 id
string detected_by_robot_str
int64 detected_by_robot
float64 robot_home_position_x
float64 robot_home_position_y
float64 x_coordinate
float64 y_coordinate
"""
  __slots__ = ['id','detected_by_robot_str','detected_by_robot','robot_home_position_x','robot_home_position_y','x_coordinate','y_coordinate']
  _slot_types = ['int64','string','int64','float64','float64','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       id,detected_by_robot_str,detected_by_robot,robot_home_position_x,robot_home_position_y,x_coordinate,y_coordinate

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ExpFrontierElement, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.id is None:
        self.id = 0
      if self.detected_by_robot_str is None:
        self.detected_by_robot_str = ''
      if self.detected_by_robot is None:
        self.detected_by_robot = 0
      if self.robot_home_position_x is None:
        self.robot_home_position_x = 0.
      if self.robot_home_position_y is None:
        self.robot_home_position_y = 0.
      if self.x_coordinate is None:
        self.x_coordinate = 0.
      if self.y_coordinate is None:
        self.y_coordinate = 0.
    else:
      self.id = 0
      self.detected_by_robot_str = ''
      self.detected_by_robot = 0
      self.robot_home_position_x = 0.
      self.robot_home_position_y = 0.
      self.x_coordinate = 0.
      self.y_coordinate = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      buff.write(_struct_q.pack(self.id))
      _x = self.detected_by_robot_str
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_q4d.pack(_x.detected_by_robot, _x.robot_home_position_x, _x.robot_home_position_y, _x.x_coordinate, _x.y_coordinate))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 8
      (self.id,) = _struct_q.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.detected_by_robot_str = str[start:end].decode('utf-8')
      else:
        self.detected_by_robot_str = str[start:end]
      _x = self
      start = end
      end += 40
      (_x.detected_by_robot, _x.robot_home_position_x, _x.robot_home_position_y, _x.x_coordinate, _x.y_coordinate,) = _struct_q4d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      buff.write(_struct_q.pack(self.id))
      _x = self.detected_by_robot_str
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_q4d.pack(_x.detected_by_robot, _x.robot_home_position_x, _x.robot_home_position_y, _x.x_coordinate, _x.y_coordinate))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 8
      (self.id,) = _struct_q.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.detected_by_robot_str = str[start:end].decode('utf-8')
      else:
        self.detected_by_robot_str = str[start:end]
      _x = self
      start = end
      end += 40
      (_x.detected_by_robot, _x.robot_home_position_x, _x.robot_home_position_y, _x.x_coordinate, _x.y_coordinate,) = _struct_q4d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_q = struct.Struct("<q")
_struct_q4d = struct.Struct("<q4d")
